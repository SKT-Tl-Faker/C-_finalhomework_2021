#include "dialog4.h"
#include "dialog3.h"
#include "dialog5.h"
#include "ui_dialog4.h"
#include"dialogh.h"
#include<QPixmap>
#include<QMessageBox>
Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog4)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/images/p44.png"));
    ui->label->setScaledContents(true);
}

Dialog4::~Dialog4()
{
    delete ui;
}

void Dialog4::on_pushButton_clicked()
{
    Dialog3 *dialog3=new Dialog3;
    this -> close();
    dialog3 ->show();
}

void Dialog4::on_pushButton_2_clicked()
{
    Dialog5 *dialog5=new Dialog5;
    this -> close();
    dialog5 ->show();
}

void Dialog4::on_pushButton_3_clicked()
{
    Dialog3 *dialog3=new Dialog3;
    this -> close();
    dialog3 ->show();
}

void Dialog4::on_pushButton_4_clicked()
{
    Dialog3 *dialog3=new Dialog3;
    this -> close();
    dialog3 ->show();
}

void Dialog4::on_pushButton_5_clicked()
{
    Dialog3 *dialog3=new Dialog3;
    this -> close();
    dialog3 ->show();
}

void Dialog4::on_pushButton_6_clicked()
{
    Dialogh *h=new Dialogh;
    h->show();
}

void Dialog4::on_pushButton_7_clicked()
{
    this->close();
}
