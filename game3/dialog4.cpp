#include "dialog4.h"
#include "dialog3.h"
#include "dialog5.h"
#include "ui_dialog4.h"
#include<QPixmap>
#include<QMessageBox>
Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog4)
{
    ui->setupUi(this);
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
    this->close();
}

void Dialog4::on_pushButton_4_clicked()
{
    this->close();
}

void Dialog4::on_pushButton_5_clicked()
{
    this->close();
}

void Dialog4::on_pushButton_6_clicked()
{
    QMessageBox box;
    box.setText("abc");
    box.setTextInteractionFlags(Qt::TextSelectableByMouse);
    box.exec();
    box.show();
}

void Dialog4::on_pushButton_7_clicked()
{
    this->close();
}
