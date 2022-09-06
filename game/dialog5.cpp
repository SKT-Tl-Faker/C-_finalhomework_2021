#include "dialog5.h"
#include "dialog4.h"
#include "dialog6.h"
#include "ui_dialog5.h"
#include<QMessageBox>
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
    this->close();
}

void Dialog5::on_pushButton_2_clicked()
{
   this->close();
}

void Dialog5::on_pushButton_4_clicked()
{
    this->close();
}

void Dialog5::on_pushButton_3_clicked()
{
    QMessageBox box;
    box.setText("红色按钮在图片的红色里~~~~");
    box.setTextInteractionFlags(Qt::TextSelectableByMouse);
    box.exec();
    box.show();
}

void Dialog5::on_pushButton_5_clicked()
{
    Dialog6 *dialog66=new Dialog6;
    this -> close();
    dialog66 ->show();
}

void Dialog5::on_pushButton_7_clicked()
{
    Dialog4 *dialog4=new Dialog4;
    this -> close();
    dialog4 ->show();
}
