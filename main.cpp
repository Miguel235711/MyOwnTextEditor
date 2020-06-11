#include <QApplication>
#include <QPushButton>
#include <iostream>
#include "mainwindow.h"
#include "textview.h"

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    TextView * centralWidget = new TextView();
    MainWindow * window=new MainWindow("Main Window Title",centralWidget);
    return app.exec();
}
