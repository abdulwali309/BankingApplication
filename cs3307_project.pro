# Project name
TARGET = cs3307_project

# Source files
SOURCES += src/main.cpp \
           src/Login.cpp \
           src/Account.cpp \
           src/Transaction.cpp \
           gui/mainwindow.cpp \
           src/Budget.cpp \
           src/History.cpp

# Header files
HEADERS += src/Login.h \
           src/Account.h \
           src/Transaction.h \
           gui/mainwindow.h \
           src/Budget.h \
           src/History.h

# UI files
FORMS += gui/mainwindow.ui

# Qt modules
QT += core gui widgets

# Compiler flags
QMAKE_CXXFLAGS += -std=c++17

# Debug/Release mode
CONFIG += debug

CONFIG -= app_bundle

# Resources
RESOURCES += gui/resources.qrc