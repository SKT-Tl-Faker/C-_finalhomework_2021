#ifndef DIALOGH_H
#define DIALOGH_H

#include <QDialog>

namespace Ui {
class Dialogh;
}

class Dialogh : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogh(QWidget *parent = 0);
    ~Dialogh();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialogh *ui;
};

#endif // DIALOGH_H
