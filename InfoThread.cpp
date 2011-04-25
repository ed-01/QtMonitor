/*
 * InfoThread.cpp
 *
 *  Created on: 25.04.2011
 *      Author: ed
 */

#include "InfoThread.h"

InfoThread::InfoThread()
{
	this->stopped = false;
	this->delay = 1000;
}

void InfoThread::run()
{
	this->stopped = false;
	while (!stopped)
	{
		emit timeExpired();

		/* wait a little bit until the next event */
		usleep(this->delay*1000);
	}
}

void InfoThread::stop()
{
	stopped = true;
}

void InfoThread::setDelay(int delay)
{
	this->delay = delay;
}
