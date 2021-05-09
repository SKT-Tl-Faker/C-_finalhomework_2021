#include "dialog2.h"
#include "dialog.h"
#include "dialog3.h"
#include "ui_dialog2.h"

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_clicked()
{
    Dialog *dialog=new Dialog;
    this->close();
    dialog->show();
}

void Dialog2::on_pushButton_3_clicked()
{
    this->close();
}

void Dialog2::on_pushButton_2_clicked()
{
    Dialog3 *dialog3=new Dialog3;
    this->close();
    dialog3->show();
}
