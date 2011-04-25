#ifndef QTMONITORING_H
#define QTMONITORING_H

#include <QtGui>
#include "ui_QtMonitoring.h"
#include "InfoThread.h"

#include <iostream>
using namespace std;

class QtMonitoring : public QWidget
{
    Q_OBJECT

	public:
		QtMonitoring(QWidget *parent = 0);
		~QtMonitoring();

	private:
		QPushButton *btnStart;
		QPushButton *btnStop;
		InfoThread *infoThread;
		Ui::QtMonitoringClass ui;

	private slots:
		void startMonitoring();
		void stopMonitoring();
		void handleTimeExpired();
};

#endif // QTMONITORING_H
