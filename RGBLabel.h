#ifndef RGBLABEL_H
#define RGBLABEL_H

#include <QLabel>
#include <QWidget>
#include <Qt>

class RGBLabel : public QLabel {
    Q_OBJECT

public:
    explicit RGBLabel(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~RGBLabel() override;
    void setColor(QColor color);

signals:
    void valueChanged(QColor);

protected:
    void mousePressEvent(QMouseEvent* event) override;
    void enterEvent(QEvent* event) override;
    void leaveEvent(QEvent* event) override;
};

#endif // RGBLABEL_H
