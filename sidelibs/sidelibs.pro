CONFIG += shared c++11
CONFIG -= qt

HEADERS += \
        include/maildbparser.h
SOURCES += \
        maildbparser.cpp \
        maildbparser.cpp
TARGET = dbparser.so

QMAKE_CFLAGS = '-fPIC'
QMAKE_LFLAGS = '-shared'
