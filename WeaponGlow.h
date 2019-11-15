#ifndef WEAPONGLOW_H
#define WEAPONGLOW_H

#include <QByteArray>
#include <QColor>

class WeaponGlow
{
public:
    WeaponGlow(QByteArray &content);
    QColor getColor(QByteArray &content, int upgrade, int type);
    void setColor(QByteArray &content, QColor color, int upgrade, int type);

private:
    int basePointer;
    int getPosition(int upgrade, int type);
};

#endif // WEAPONGLOW_H
