#ifndef TEXTVIEW_H
#define TEXTVIEW_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>

class TextView : public QWidget
{
private:
    QHBoxLayout * mainLayout=new QHBoxLayout();
public:
    TextView();
};

#endif // TEXTVIEW_H
