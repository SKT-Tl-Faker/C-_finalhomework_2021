#include "dialogh.h"
#include "ui_dialogh.h"
#include<QPixmap>
Dialogh::Dialogh(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogh)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/images/p4.png"));
    ui->label->setScaledContents(true);
}

Dialogh::~Dialogh()
{
    delete ui;
}

void Dialogh::on_pushButton_clicked()
{
    this->close();
}
