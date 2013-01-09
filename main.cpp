#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
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
