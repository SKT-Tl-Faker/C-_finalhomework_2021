#include "dialog3.h"
#include "dialog2.h"
#include "dialog4.h"
#include "ui_dialog3.h"
#include<QPixmap>
#include<QMessageBox>
Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_pushButton_clicked()
{
    Dialog2 *dialog2=new Dialog2;
    this -> close();
    dialog2 ->show();
}

void Dialog3::on_pushButton_2_clicked()
{
    Dialog4 *dialog4=new Dialog4;
    this -> close();
    dialog4 ->show();
}

void Dialog3::on_pushButton_3_clicked()
{
    this->close();
}

void Dialog3::on_pushButton_4_clicked()
{
    QMessageBox box;
    box.setText("abc");
    box.setTextInteractionFlags(Qt::TextSelectableByMouse);
    box.exec();
    box.show();
}
