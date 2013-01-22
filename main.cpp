#ifdef QT5
    #include <QApplication>
#else
    #include <QtGui/QApplication>
#endif

#include <QTextCodec>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#ifndef QT5
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
#endif
    QApplication a(argc, argv);
    QUrl url;
    if (argc > 1)
        url = QUrl(argv[1]);
    else
        url = QUrl("http://anifest-amur.ru/");
    MainWindow w(url);
    w.showMaximized();
    
    return a.exec();
}
