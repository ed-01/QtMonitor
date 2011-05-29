/*
 * QtMonitoring.cpp
 *
 *  Created on: 25.04.2011
 *      Author: ed
 */

#include "QtMonitoring.h"

QtMonitoring::QtMonitoring() : QWidget()
{
	ui.setupUi(this);

	infoThread = new InfoThread();
	memInfo = new MemoryInfo("/proc/meminfo");

	QHBoxLayout *controlLayout = new QHBoxLayout;

	btnStart = new QPushButton("Start");
	btnStop = new QPushButton("Stop");
	btnStop->setEnabled(false);

	this->connect(btnStart, SIGNAL(clicked()), this, SLOT(startMonitoring()));
	this->connect(btnStop, SIGNAL(clicked()), this, SLOT(stopMonitoring()));

	this->connect(infoThread, SIGNAL(timeExpired()), this, SLOT(handleTimeExpired()));

	controlLayout->addWidget(btnStart);
	controlLayout->addWidget(btnStop);

	this->setLayout(controlLayout);
}

QtMonitoring::~QtMonitoring() {}

void QtMonitoring::startMonitoring()
{
	qDebug() << "Starting monitoring...";
	btnStart->setEnabled(FALSE);
	btnStop->setEnabled(TRUE);

	infoThread->start();
}

void QtMonitoring::stopMonitoring()
{
	qDebug() << "Stopping monitoring...";
	btnStart->setEnabled(TRUE);
	btnStop->setEnabled(FALSE);

	infoThread->stop();
}

void QtMonitoring::handleTimeExpired()
{
	// do memory monitoring
	this->memInfo->update();
	qDebug() << "Total memory: " << this->memInfo->getTotalMemory() << " KB";
	qDebug() << "Used memory:  " << this->memInfo->getUsedMemory() << " KB";
	qDebug() << "Free memory:  " << this->memInfo->getFreeMemory() << " KB";
}
