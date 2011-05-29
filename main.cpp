#include "QtMonitoring.h"

#include <QtGui>
#include <QApplication>

#include <iostream>
using namespace std;

void debugOutput(QtMsgType type, const char *msg)
{
	switch(type)
	{
     	 case QtDebugMsg:
     		 cout << "Debug: " << msg << endl;
     		 break;
     	 case QtWarningMsg:
     		 cout << "Warning: " << msg << endl;
     		 break;
     	 case QtCriticalMsg:
     		 cout << "Critical: " << msg << endl;
     		 break;
     	 case QtFatalMsg:
     		 cout << "Fatal: " << msg << endl;
     		 abort();
	}
}

int main(int argc, char *argv[])
{
    qInstallMsgHandler(debugOutput);

    QApplication a(argc, argv);
    QtMonitoring w;
    w.show();
    return a.exec();
}
