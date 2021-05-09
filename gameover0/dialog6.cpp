#include "dialog6.h"
#include "dialog5.h"
#include "ui_dialog6.h"
#include "dialog7.h"
#include<QPixmap>
#include<QMessageBox>
Dialog6::Dialog6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog6)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/images/p6.jpg"));
    ui->label->setScaledContents(true);
}

Dialog6::~Dialog6()
{
    delete ui;
}

void Dialog6::on_pushButton_clicked()
{
    Dialog5 *dialog5=new Dialog5;
    this -> close();
    dialog5 ->show();
}

void Dialog6::on_pushButton_2_clicked()
{
    Dialog7 *dialog7=new Dialog7;
    this -> close();
    dialog7 ->show();
}

void Dialog6::on_pushButton_3_clicked()
{
    QMessageBox box;
    box.setText("你不会飞，当然是选择从迷宫外绕过去啦（又没说要走里面）所以a+b");
    box.setTextInteractionFlags(Qt::TextSelectableByMouse);
    box.exec();
    box.show();
}

void Dialog6::on_pushButton_4_clicked()
{
    this->close();
}

void Dialog6::on_pushButton_7_clicked()
{
    Dialog5 *dialog5=new Dialog5;
    this -> close();
    dialog5 ->show();
}

void Dialog6::on_pushButton_5_clicked()
{
    Dialog5 *dialog5=new Dialog5;
    this -> close();
    dialog5 ->show();
}

void Dialog6::on_pushButton_6_clicked()
{
    Dialog5 *dialog5=new Dialog5;
    this -> close();
    dialog5 ->show();
}
