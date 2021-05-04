#include "mywidget.h"
#include <QApplication>
//argc命令行变量数量，argv命行数组
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myWidget w;
    w.show();

    return a.exec();
}
