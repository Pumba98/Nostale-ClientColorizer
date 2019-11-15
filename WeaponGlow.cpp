#include "WeaponGlow.h"
#include "PatternSearch.h"

WeaponGlow::WeaponGlow(QByteArray &content)
{
    this->basePointer = Pattern::search(content, QByteArrayLiteral("\xC6\x43\x1D\x02\x68\x00\x00\x00\x00\x33\xC9\x33\xD2\xB0\xFF\xE8\x00\x00\x00\x00\x89\x43\x15\xC7\x43\x00\x00\x00\x00\x00\xC6\x43\x14\x00\xC6\x43\x0F\x00\xE9\x00\x00\x00\x00\xC6\x43\x1D\x02"), "xxxx???????????x????xxxxx?????xxxxxxxxx????xxxx");
}

QColor WeaponGlow::getColor(QByteArray &content, int upgrade, int type) {
    int pos = getPosition(upgrade, type);
    QColor color(0,0,0);
    if ((uint8_t)content.at(pos) == 0xB1)
        color.setBlue((uint8_t)content.at(pos + 1));
    if ((uint8_t)content.at(pos + 2) == 0xB2)
        color.setGreen((uint8_t)content.at(pos + 3));
    if ((uint8_t)content.at(pos + 4) == 0xB0)
        color.setRed((uint8_t)content.at(pos + 5));
    return color;
}

void WeaponGlow::setColor(QByteArray &content, QColor color, int upgrade, int type){
    int pos = getPosition(upgrade, type);
    content[pos] = 0xB1;
    content[pos + 1] = color.blue();
    content[pos + 2] = 0xB2;
    content[pos + 3] = color.green();
    content[pos + 4] = 0xB0;
    content[pos + 5] = color.red();
}

int WeaponGlow::getPosition(int upgrade, int type) {
    int pos = this->basePointer;
    switch (upgrade) {
        case 1:
            pos += 0x9;
            break;
        case 2:
            pos += 0x34;
            break;
        case 3:
            pos += 0x5F;
            break;
        case 4:
            pos += 0x8A;
            break;
        case 5:
            pos += 0xC8;
            break;
        case 6:
            pos += 0x106;
            break;
        case 7:
            pos += 0x144;
            break;
        case 8:
            pos += 0x182;
            break;
        case 9:
            pos += 0x1C3;
            break;
        case 10:
            pos += 0x201;
            break;
    }
    if (type == 2) {
        switch (upgrade) {
            case 4:
            case 5:
            case 6:
            case 7:
                pos += 0x1B;
                break;
            case 8:
            case 9:
            case 10:
                pos += 0x1E;
                break;
        }
    }
    return pos;
}
