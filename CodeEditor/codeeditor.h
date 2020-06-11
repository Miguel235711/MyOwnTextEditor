#ifndef CODEEDITOR_H
#define CODEEDITOR_H

#include<QPlainTextEdit>
#include<QTextBlock>
#include<QPainter>
#include<math.h>

class CodeEditor : public QPlainTextEdit
{
    Q_OBJECT
public:
    CodeEditor(QWidget *parent=nullptr);
    void lineNumberAreaPaintEvent(QPaintEvent *event);
    int lineNumberAreaWidth();
protected:
    void resizeEvent(QResizeEvent *e) override;
private slots:
    void updateLineNumberAreaWidth(int newBlockCount);
    void highlightCurrentLine();
    void updateLineNumberArea(const QRect & rect,int dy);
private:
    QWidget *lineNumberArea;
};

#endif // CODEEDITOR_H
