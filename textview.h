#ifndef TEXTVIEW_H
#define TEXTVIEW_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>

#include "CodeEditor/codeeditor.h"

class TextView : public QWidget
{
private:
    QHBoxLayout * mainLayout=new QHBoxLayout();
    CodeEditor * codeEditor=new CodeEditor();
public:
    TextView();
    const QString getPlainText();
};

#endif // TEXTVIEW_H
