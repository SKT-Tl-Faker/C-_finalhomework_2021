#include "dialog.h"
#include"dialog2.h"
#include "ui_dialog.h"
#include<QPixmap>
#include<QMessageBox>
#include<QtMultimedia/QMediaPlayer>


//QMessageBox box;
//box.setText("abc");
//box.setTextInteractionFlags(Qt::TextSelectableByMouse);
//box.exec();
//box.show();
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    QMediaPlayer *startSound = new QMediaPlayer;
            startSound->setMedia(QUrl("qrc:/music/mus1.mp3"));
            startSound->setVolume(50);
               startSound->play();
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/images/图片6.png"));
    ui->label->setScaledContents(true);
}


Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{

    Dialog2 *dialog2=new Dialog2;
    this->close();
    dialog2 ->show();
}

void Dialog::on_pushButton_2_clicked()
{
    this->close();
}


