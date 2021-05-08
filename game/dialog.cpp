#include "dialog.h"
#include"dialog2.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    Dialog2 *dialog2=new Dialog2;
    this->close();
    dialog2 ->show();
}

void Dialog::on_pushButton_2_clicked()
{
    this->close();
}

void Dialog::on_radioButton_clicked()
{
    this->close();
}
