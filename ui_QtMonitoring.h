/********************************************************************************
** Form generated from reading UI file 'QtMonitoring.ui'
**
** Created: Sun 29. May 20:59:36 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTMONITORING_H
#define UI_QTMONITORING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtMonitoringClass
{
public:

    void setupUi(QWidget *QtMonitoringClass)
    {
        if (QtMonitoringClass->objectName().isEmpty())
            QtMonitoringClass->setObjectName(QString::fromUtf8("QtMonitoringClass"));
        QtMonitoringClass->resize(400, 300);

        retranslateUi(QtMonitoringClass);

        QMetaObject::connectSlotsByName(QtMonitoringClass);
    } // setupUi

    void retranslateUi(QWidget *QtMonitoringClass)
    {
        QtMonitoringClass->setWindowTitle(QApplication::translate("QtMonitoringClass", "QtMonitoring", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QtMonitoringClass: public Ui_QtMonitoringClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTMONITORING_H
