#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QMainWindow>
#include<QMenuBar>
#include<QDebug>

#include<iostream>
#include<vector>

class MainWindow : QMainWindow
{
private:
    const QString & name;
    const QString defaultName ="";
    QWidget * centralWidget;
    struct menuActionS{
        QString name,statusTip;
        QKeySequence keySequence;
        QFunctionPointer handler;
        menuActionS(){}
        menuActionS(QString name,QString statusTip,QKeySequence keySequence,QFunctionPointer handler){
            this->name=name;
            this->statusTip=statusTip;
            this->keySequence=keySequence;
            this->handler=handler;
        }
    };

    const std::vector<menuActionS> menuActions={
        menuActionS("New","Create a new File",QKeySequence::New,[](){
            qInfo() << "New Pressed";
        }),
        menuActionS("Open","Open a new File",QKeySequence::Open,[](){
            qInfo() << "Open Pressed";
        }),
        menuActionS("Save","Save current File",QKeySequence::Save,[](){
            qInfo() << "Save Pressed";
        })
    };
public:
    MainWindow();
    MainWindow(const QString & name,QWidget * centralWidget);
};

#endif // MAINWINDOW_H
