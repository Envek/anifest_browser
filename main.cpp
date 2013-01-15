#include <QtGui/QApplication>
#include <QTextCodec>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
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
