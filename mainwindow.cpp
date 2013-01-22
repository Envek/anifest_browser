#ifdef QT5
    #include <QtWebKitWidgets/QWebView>
#else
    #include <QWebView>
#endif

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(const QUrl &url, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->browser->settings()->setAttribute(QWebSettings::LocalContentCanAccessRemoteUrls,true);
    ui->browser->settings()->setAttribute(QWebSettings::LocalContentCanAccessFileUrls,true);
    ui->browser->settings()->setAttribute(QWebSettings::PluginsEnabled, true); // Enable Flash
    ui->browser->load(url);
}

MainWindow::~MainWindow()
{
    delete ui;
}
