/*
 * MemoryInfo.cpp
 *
 *  Created on: 25.04.2011
 *      Author: ed
 */

#include "MemoryInfo.h"

#ifdef _TTY_POSIX
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#else
	// windows
#endif

MemoryInfo::MemoryInfo(QString path) : QObject()
{
	this->path = path;
}

MemoryInfo::~MemoryInfo() {}

void MemoryInfo::update()
{
	qDebug() << "MemoryInfo: path=" << this->path;

#ifdef _TTY_POSIX
// todo: rework => (ed)
	// linux
	int fd;
	size_t n;
	int bufferSize = 2048;

	if ((fd = open( "/proc/meminfo", O_RDONLY)) < 0) {
	    qDebug() << "MemoryInfo: cannot open file: " << this->path.toStdString() << endl;
	    this->total = 0;
	    this->free = 0;
	    this->used = 0;
	} else {
		char memInfoBuffer[bufferSize];
		n = read(fd, memInfoBuffer, bufferSize-1);
		if (n == bufferSize-1 || n <= 0)
		    qDebug() << "MemoryInfo: buffer too small to read: " << this->path.toStdString() << endl;

		close(fd);

		this->scanOne(memInfoBuffer, "MemTotal", &this->total);
		this->scanOne(memInfoBuffer, "MemFree", &this->free);
		this->used = this->total - this->free;
	}
// <= todo: rework (ed)
#else
	// windows
    this->total = 0;
    this->free = 0;
    this->used = 0;
#endif
}

void MemoryInfo::scanOne(char* buff, char *key, unsigned long long* val)
{
	int o;
	char *b = strstr(buff, key);
	if (b)
		o = sscanf(b + strlen(key), ": %llu", val);
}

long long MemoryInfo::getTotalMemory()
{
	return this->total;
}

long long MemoryInfo::getFreeMemory()
{
	return this->free;
}

long long MemoryInfo::getUsedMemory()
{
	return this->used;
}
