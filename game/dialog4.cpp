#include "dialog4.h"
#include "dialog3.h"
#include "dialog5.h"
#include "ui_dialog4.h"

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
