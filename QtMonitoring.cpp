#include "QtMonitoring.h"

QtMonitoring::QtMonitoring(QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);

	QHBoxLayout *controlLayout = new QHBoxLayout;

	btnStart = new QPushButton("Start");
	btnStop = new QPushButton("Stop");
	btnStop->setEnabled(false);


	this->connect(btnStart, SIGNAL(clicked()), this, SLOT(startMonitoring()));
	this->connect(btnStop, SIGNAL(clicked()), this, SLOT(stopMonitoring()));

	controlLayout->addWidget(btnStart);
	controlLayout->addWidget(btnStop);

	this->setLayout(controlLayout);
}

QtMonitoring::~QtMonitoring() {}

void QtMonitoring::startMonitoring()
{
	cout << "Starting monitoring..." << endl;
	btnStart->setEnabled(FALSE);
	btnStop->setEnabled(TRUE);
}

void QtMonitoring::stopMonitoring()
{
	cout << "Stopping monitoring..." << endl;
	btnStart->setEnabled(TRUE);
	btnStop->setEnabled(FALSE);
}
