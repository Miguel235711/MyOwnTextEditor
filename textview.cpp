#include "textview.h"

TextView::TextView()
{
    this->setLayout(this->mainLayout);
    this->mainLayout->addWidget(new QLabel("HelloWorld"));
}
