#include "mainwindow.h"

MainWindow::MainWindow()
    :name(defaultName){
    this->centralWidget=nullptr;
    showMaximized();
}
MainWindow::MainWindow(const QString & name, QWidget * centralWidget)
    :name(name){
    this->centralWidget=centralWidget;
    this->setWindowTitle(name);
    this->setCentralWidget(this->centralWidget);
    auto menu=this->menuBar()->addMenu(tr("&File"));
    for(auto actionConf:this->menuActions){
        auto action=menu->addAction(actionConf.name);
        action->setStatusTip(actionConf.statusTip);
        action->setShortcut(actionConf.keySequence);
        connect(action,&QAction::triggered,this,actionConf.handler);
    }
    showMaximized();
}

