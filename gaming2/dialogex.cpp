#include "dialogex.h"
#include "ui_dialogex.h"
#include<QPixmap>
#include"dialog8.h"
Dialogex::Dialogex(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogex)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/images/p9.jpg"));
    ui->label->setScaledContents(true);
}

Dialogex::~Dialogex()
{
    delete ui;
}

void Dialogex::on_pushButton_clicked()
{
   this->close();
}
