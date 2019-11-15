#include "RGBLabel.h"
#include <QColorDialog>

RGBLabel::RGBLabel(QWidget* parent, Qt::WindowFlags f)
    : QLabel(parent) {

}

RGBLabel::~RGBLabel() {}

void RGBLabel::setColor(QColor color) {
    setText(color.name().toUpper());
    setStyleSheet("background-color: " + color.name());
}

void RGBLabel::mousePressEvent(QMouseEvent* event) {
    Q_UNUSED(event);
    QColor current(this->text());
    QColor newColor = QColorDialog::getColor(current, nullptr, "Select the new Color");
    if (!newColor.isValid())
        return;
    emit valueChanged(newColor);
    setColor(newColor);
}

void RGBLabel::enterEvent(QEvent *event) {
    Q_UNUSED(event);
    setCursor(Qt::PointingHandCursor);
}

void RGBLabel::leaveEvent(QEvent *event) {
    Q_UNUSED(event);
    setCursor(Qt::ArrowCursor);
}
