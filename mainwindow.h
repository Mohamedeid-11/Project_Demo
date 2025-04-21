#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>
#include "global.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGridLayout *recipes_grid;
    QList<QWidget *> recipe_pages;      // IDs of recipe pages

private slots:
    void on_home_page_btn_clicked();

    void on_log_out_btn_2_clicked();

    void on_save_recipe_btn_clicked();

    void on_display_recipe_btn_clicked();

    void create_recipe_page(QSharedPointer<Recipe> r_ptr);

signals:
    void switchToDialog();
};

#endif // MAINWINDOW_H
