#-------------------------------------------------
#
# Project created by QtCreator 2013-01-09T19:19:40
#
#-------------------------------------------------

QT       += core gui webkit

# Qt 5 compatibility
contains(QT_VERSION, ^5.*) {
  QT += widgets webkitwidgets
  DEFINES += QT5
}

TARGET = anifest_browser
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    .gitignore \
    README.md
