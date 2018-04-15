TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    collaboratore.cpp \
    docente.cpp

HEADERS += \
    collaboratore.h \
    docente.h \
    icollaboratore.h
