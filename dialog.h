#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "global.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;

private slots:
    void on_log_in_btn_clicked();
    void on_register_page_btn_clicked();
    void on_register_btn_clicked();

signals:
    void switchToMainWindow();


};

#endif // DIALOG_H
