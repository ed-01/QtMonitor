/*
 * QtMonitoring.h
 *
 *  Created on: 25.04.2011
 *      Author: ed
 */

#ifndef QTMONITORING_H
#define QTMONITORING_H

#include <QtGui>
#include <QtDebug>
#include "ui_QtMonitoring.h"
#include "InfoThread.h"
#include "system/MemoryInfo.h"

class QtMonitoring : public QWidget
{
    Q_OBJECT

	public:
		QtMonitoring();
		~QtMonitoring();

	private:
		QPushButton *btnStart;
		QPushButton *btnStop;
		InfoThread *infoThread;
		MemoryInfo *memInfo;
		Ui::QtMonitoringClass ui;

	private slots:
		void startMonitoring();
		void stopMonitoring();
		void handleTimeExpired();
};

#endif // QTMONITORING_H
