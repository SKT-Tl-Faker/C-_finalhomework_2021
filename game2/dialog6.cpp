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
    box.setText("abc");
    box.setTextInteractionFlags(Qt::TextSelectableByMouse);
    box.exec();
    box.show();
}

void Dialog6::on_pushButton_4_clicked()
{
    this->close();
}
