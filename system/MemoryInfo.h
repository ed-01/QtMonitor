/*
 * MemoryInfo.h
 *
 *  Created on: 25.04.2011
 *      Author: ed
 */

#ifndef MEMORYINFO_H_
#define MEMORYINFO_H_

#include <QtGui>

#include <iostream>
using namespace std;

class MemoryInfo : public QObject
{
    Q_OBJECT

	public:
		MemoryInfo(QString path);
		~MemoryInfo();
		void update();
		long long getTotalMemory();
		long long getFreeMemory();
		long long getUsedMemory();

	private:
		QString path;
		unsigned long long total, free, used;
		void scanOne(char* buff, char *key, unsigned long long* val);
};


#endif /* MEMORYINFO_H_ */
