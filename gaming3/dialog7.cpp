#include "dialog7.h"
#include "ui_dialog7.h"
#include "dialog6.h"
#include "dialog8.h"
#include<QPixmap>
#include<QMessageBox>
Dialog7::Dialog7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog7)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/images/p7.jpg"));
    ui->label->setScaledContents(true);
}

Dialog7::~Dialog7()
{
    delete ui;
}

void Dialog7::on_pushButton_clicked()
{
    Dialog6 *dialog5=new Dialog6;
    this -> close();
    dialog5 ->show();
}

void Dialog7::on_pushButton_2_clicked()
{
    Dialog8 *dialog5=new Dialog8;
    this -> close();
    dialog5 ->show();
}

void Dialog7::on_pushButton_3_clicked()
{
    QMessageBox box;
    box.setText("这是第6关，你过了5个啦");
    box.setTextInteractionFlags(Qt::TextSelectableByMouse);
    box.exec();
    box.show();
}

void Dialog7::on_pushButton_4_clicked()
{
    this->close();
}

void Dialog7::on_pushButton_5_clicked()
{
    this->close();
}

void Dialog7::on_pushButton_6_clicked()
{
    this->close();
}

void Dialog7::on_pushButton_7_clicked()
{
    this->close();
}
