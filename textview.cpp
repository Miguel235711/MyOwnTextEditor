#include "textview.h"


TextView::TextView()
{
    setLayout(mainLayout);
    mainLayout->addWidget(codeEditor);
}
const QString TextView::getPlainText(){
    return codeEditor->toPlainText();
}
