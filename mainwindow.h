#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QMainWindow>
#include<QMenuBar>
#include<QDebug>

#include "textview.h"

#include<iostream>
#include<vector>

class MainWindow : QMainWindow
{
private:
    const QString & name;
    const QString defaultName ="";
    TextView * centralWidget;
    struct menuActionS{
        QString name,statusTip;
        QKeySequence keySequence;
        void (*handler) (const QString &);
        menuActionS(){}
        menuActionS(QString name,QString statusTip,QKeySequence keySequence,void (*handler)(const QString &)){
            this->name=name;
            this->statusTip=statusTip;
            this->keySequence=keySequence;
            this->handler=handler;
        }
    };

    const std::vector<menuActionS> menuActions={
        menuActionS("New","Create a new File",QKeySequence::New,[](const QString &content){
            qInfo() << "New Pressed";
        }),
        menuActionS("Open","Open a new File",QKeySequence::Open,[](const QString &content){
            qInfo() << "Open Pressed";
        }),
        menuActionS("Save","Save current File",QKeySequence::Save,[](const QString &content){
            qInfo() << "Save Pressed";
            qInfo() << "Content: " << content;
            //QFile file;
            //file.
        })
    };
public:
    MainWindow();
    MainWindow(const QString & name,TextView * centralWidget);
};

#endif // MAINWINDOW_H
