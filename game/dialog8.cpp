#include "dialog8.h"
#include "ui_dialog8.h"
#include "dialog7.h"
#include<QPixmap>
#include<QMessageBox>
#include"dialogex.h"
Dialog8::Dialog8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog8)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/images/p8.jpg"));
    ui->label->setScaledContents(true);
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

void Dialog8::on_pushButton_3_clicked()
{
    Dialogex *d=new Dialogex;
    d->show();
}
