#include "mainwindow.h"
#include "dialog.h"
#include "global.h"
#include "data.h"

#include <QApplication>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);

	// intialize recipes_id_to_index
	for (int i = 0; i < 10000; i++)
		recipes_id_to_index[i] = -1;

	load_recipes(recipes, recipes_count);
	load_users();

	Dialog dialog;
	dialog.show();

	MainWindow* mainWindow = nullptr;

	// Connect signals to switch between windows
	QObject::connect(&dialog, &Dialog::switchToMainWindow, &dialog, [&]() 
	{
		dialog.hide();
		delete mainWindow;
		mainWindow = new MainWindow();
		mainWindow->show();

		QObject::connect(mainWindow, &MainWindow::switchToDialog, mainWindow, [&]() 
		{
			mainWindow->hide();
			dialog.show();
		});

	});


	// Connect signal to save data whan app is about to Quit
	QObject::connect(&a, &QCoreApplication::aboutToQuit, [&]() {
		save_recipes(recipes, recipes_count);
		save_users();
	});


	return a.exec();
}