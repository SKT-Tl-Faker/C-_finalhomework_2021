#include "dialog8.h"
#include "ui_dialog8.h"
#include "dialog7.h"
#include<QPixmap>
#include<QMessageBox>
Dialog8::Dialog8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog8)
{
    ui->setupUi(this);
}

Dialog8::~Dialog8()
{
    delete ui;
}

void Dialog8::on_pushButton_clicked()
{
    Dialog7 *dialog5=new Dialog7;
    this -> close();
    dialog5 ->show();
}

void Dialog8::on_pushButton_2_clicked()
{
    this->close();
}
