#include "dialog6.h"
#include "dialog5.h"
#include "ui_dialog6.h"

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
    this->close();
}
