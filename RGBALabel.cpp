#include "RGBALabel.h"
#include <QColorDialog>

RGBALabel::RGBALabel(QWidget* parent, Qt::WindowFlags f)
    : QLabel(parent) {

}

RGBALabel::~RGBALabel() {}

void RGBALabel::setColor(QColor color) {
    setText(color.name().toUpper());
    setStyleSheet("background-color: " + color.name(QColor::HexArgb));
}

void RGBALabel::mousePressEvent(QMouseEvent* event) {
    Q_UNUSED(event);
    QColor current(this->text());
    QColor newColor = QColorDialog::getColor(current, nullptr, "Select the new Color", QColorDialog::ShowAlphaChannel);
    if (!newColor.isValid())
        return;
    emit valueChanged(newColor);
    setColor(newColor);
}

void RGBALabel::enterEvent(QEvent *event) {
    Q_UNUSED(event);
    setCursor(Qt::PointingHandCursor);
}

void RGBALabel::leaveEvent(QEvent *event) {
    Q_UNUSED(event);
    setCursor(Qt::ArrowCursor);
}
