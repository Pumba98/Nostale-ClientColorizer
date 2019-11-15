#ifndef RGBALABEL_H
#define RGBALABEL_H

#include <QLabel>
#include <QWidget>
#include <Qt>

class RGBALabel : public QLabel {
    Q_OBJECT

public:
    explicit RGBALabel(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~RGBALabel() override;
    void setColor(QColor color);

signals:
    void valueChanged(QColor);

protected:
    void mousePressEvent(QMouseEvent* event) override;
    void enterEvent(QEvent* event) override;
    void leaveEvent(QEvent* event) override;
};

#endif // RGBALABEL_H
