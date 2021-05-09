#include "dialog5.h"
#include "dialog4.h"
#include "dialog6.h"
#include "ui_dialog5.h"

Dialog5::Dialog5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog5)
{
    ui->setupUi(this);
}

Dialog5::~Dialog5()
{
    delete ui;
}

void Dialog5::on_pushButton_clicked()
{
    Dialog4 *dialog4=new Dialog4;
    this -> close();
    dialog4 ->show();
}

void Dialog5::on_pushButton_2_clicked()
{
    Dialog6 *dialog6=new Dialog6;
    this -> close();
    dialog6 ->show();
}
