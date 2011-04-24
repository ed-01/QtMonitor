#include "QtMonitoring.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtMonitoring w;
    w.show();
    return a.exec();
}
