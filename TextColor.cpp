#include "TextColor.h"
#include "PatternSearch.h"

TextColor::TextColor(QByteArray &content)
{
    this->basePointer = Pattern::search(content, QByteArrayLiteral("\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00\x00\x00\x00\x00\x8D\x40\x00"), "xxxxxxxxxxxxxxxx");
}

QColor TextColor::getColor(QByteArray &content, int number)  {
    int pos = getPosition(number);
    uint8_t blue = content.at(pos);
    uint8_t green = content.at(pos + 1);
    uint8_t red = content.at(pos + 2);
    uint8_t alpha = content.at(pos + 3);

    return QColor(red, green, blue, alpha);
}

void TextColor::setColor(QByteArray &content, QColor color, int number){
    int pos = getPosition(number);
    content[pos] = color.blue();
    content[pos + 1] = color.green();
    content[pos + 2] = color.red();
    content[pos + 3] = color.alpha();
}

int TextColor::getPosition(int number) {
    int position = basePointer;
    position -= 0xE0;
    position += (number-1)*4;
    return position;
}
