/*
 * InfoThread.h
 *
 *  Created on: 25.04.2011
 *      Author: ed
 */

#ifndef INFOTHREAD_H_
#define INFOTHREAD_H_

#include <QObject>
#include <QThread>

class InfoThread : public QThread
{
    Q_OBJECT

	public:
		InfoThread();
		void run();
		void stop();
		void setDelay(int delay);

	private:
		volatile bool stopped;
		int delay;

	signals:
		void timeExpired();
};

#endif /* INFOTHREAD_H_ */
