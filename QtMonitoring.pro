TEMPLATE = app
TARGET = QtMonitoring
QT += core \
    gui
HEADERS += system/MemoryInfo.h \
    InfoThread.h \
    QtMonitoring.h
SOURCES += system/MemoryInfo.cpp \
    InfoThread.cpp \
    main.cpp \
    QtMonitoring.cpp
FORMS += QtMonitoring.ui
RESOURCES += 
