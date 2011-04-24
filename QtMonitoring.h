#ifndef QTMONITORING_H
#define QTMONITORING_H

#include <QtGui/QWidget>
#include "ui_QtMonitoring.h"

class QtMonitoring : public QWidget
{
    Q_OBJECT

public:
    QtMonitoring(QWidget *parent = 0);
    ~QtMonitoring();

private:
    Ui::QtMonitoringClass ui;
};

#endif // QTMONITORING_H
