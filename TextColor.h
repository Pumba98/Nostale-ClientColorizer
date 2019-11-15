#ifndef TEXTCOLOR_H
#define TEXTCOLOR_H

#include <QColor>
#include <QByteArray>

class TextColor
{
public:
    TextColor(QByteArray &content);
    QColor getColor(QByteArray &content, int number);
    void setColor(QByteArray &content, QColor color, int number);

private:
    int basePointer;
    int getPosition(int number);
};

#endif // TEXTCOLOR_H
