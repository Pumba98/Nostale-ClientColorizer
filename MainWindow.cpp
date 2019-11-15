#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->label_p1_c1, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 1, 1); });
    connect(ui->label_p2_c1, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 2, 1); });
    connect(ui->label_p3_c1, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 3, 1); });
    connect(ui->label_p4_c1, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 4, 1); });
    connect(ui->label_p5_c1, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 5, 1); });
    connect(ui->label_p6_c1, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 6, 1); });
    connect(ui->label_p7_c1, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 7, 1); });
    connect(ui->label_p8_c1, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 8, 1); });
    connect(ui->label_p9_c1, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 9, 1); });
    connect(ui->label_p10_c1, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 10, 1); });
    connect(ui->label_p4_c2, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 4, 2); });
    connect(ui->label_p5_c2, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 5, 2); });
    connect(ui->label_p6_c2, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 6, 2); });
    connect(ui->label_p7_c2, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 7, 2); });
    connect(ui->label_p8_c2, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 8, 2); });
    connect(ui->label_p9_c2, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 9, 2); });
    connect(ui->label_p10_c2, &RGBLabel::valueChanged, [=](const QColor &value) { setGlowColor(value, 10, 2); });

    connect(ui->label_u6, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 1); });
    connect(ui->label_u7, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 2); });
    connect(ui->label_u8, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 3); });
    connect(ui->label_u9, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 4); });
    connect(ui->label_u10, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 5); });
    connect(ui->label_u11, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 6); });
    connect(ui->label_u12, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 7); });
    connect(ui->label_u13, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 8); });
    connect(ui->label_u14, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 9); });
    connect(ui->label_u15, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 10); });
    connect(ui->label_u16, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 11); });
    connect(ui->label_u17, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 12); });
    connect(ui->label_u18, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 13); });
    connect(ui->label_u19, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 14); });
    connect(ui->label_u20, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 15); });
    connect(ui->label_u21, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 16); });
    connect(ui->label_u22, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 17); });
    connect(ui->label_u23, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 18); });
    connect(ui->label_u24, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 19); });
    connect(ui->label_u25, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 20); });
    connect(ui->label_u26, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 21); });
    connect(ui->label_u27, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 22); });
    connect(ui->label_u28, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 23); });
    connect(ui->label_u29, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 24); });
    connect(ui->label_u30, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 25); });
    connect(ui->label_u31, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 26); });
    connect(ui->label_u32, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 27); });
    connect(ui->label_u33, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 28); });
    connect(ui->label_u34, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 29); });
    connect(ui->label_u35, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 30); });
    connect(ui->label_u36, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 31); });
    connect(ui->label_u37, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 32); });
    connect(ui->label_u38, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 33); });
    connect(ui->label_u39, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 34); });
    connect(ui->label_u40, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 35); });
    connect(ui->label_u41, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 36); });
    connect(ui->label_u42, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 37); });
    connect(ui->label_u43, &RGBALabel::valueChanged, [=](const QColor &value) { setTableColor(value, 38); });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered() {
    QString selection = QFileDialog::getOpenFileName(this, tr("Open..."), "", "EXE (*.exe)");
    if (selection.isEmpty())
        return;
    this->path = selection;
    QFile file(this->path);
    if(!file.open(QIODevice::ReadWrite)) {
        QMessageBox::critical(this, "Error", "Can't open file!");
        return;
    }
    content = file.readAll();
    file.close();
    weaponGlow = new WeaponGlow(content);

    ui->label_p1_c1->setColor(weaponGlow->getColor(content, 1,1));
    ui->label_p2_c1->setColor(weaponGlow->getColor(content,2,1));
    ui->label_p3_c1->setColor(weaponGlow->getColor(content,3,1));
    ui->label_p4_c1->setColor(weaponGlow->getColor(content,4,1));
    ui->label_p5_c1->setColor(weaponGlow->getColor(content,5,1));
    ui->label_p6_c1->setColor(weaponGlow->getColor(content,6,1));
    ui->label_p7_c1->setColor(weaponGlow->getColor(content,7,1));
    ui->label_p8_c1->setColor(weaponGlow->getColor(content,8,1));
    ui->label_p9_c1->setColor(weaponGlow->getColor(content,9,1));
    ui->label_p10_c1->setColor(weaponGlow->getColor(content,10,1));
    ui->label_p4_c2->setColor(weaponGlow->getColor(content,4,2));
    ui->label_p5_c2->setColor(weaponGlow->getColor(content,5,2));
    ui->label_p6_c2->setColor(weaponGlow->getColor(content,6,2));
    ui->label_p7_c2->setColor(weaponGlow->getColor(content,7,2));
    ui->label_p8_c2->setColor(weaponGlow->getColor(content,8,2));
    ui->label_p9_c2->setColor(weaponGlow->getColor(content,9,2));
    ui->label_p10_c2->setColor(weaponGlow->getColor(content,10,2));

    textColor = new TextColor(content);

    ui->label_u6->setColor(textColor->getColor(content, 1));
    ui->label_u7->setColor(textColor->getColor(content, 2));
    ui->label_u8->setColor(textColor->getColor(content, 3));
    ui->label_u9->setColor(textColor->getColor(content, 4));
    ui->label_u10->setColor(textColor->getColor(content, 5));
    ui->label_u11->setColor(textColor->getColor(content, 6));
    ui->label_u12->setColor(textColor->getColor(content, 7));
    ui->label_u13->setColor(textColor->getColor(content, 8));
    ui->label_u14->setColor(textColor->getColor(content, 9));
    ui->label_u15->setColor(textColor->getColor(content, 10));
    ui->label_u16->setColor(textColor->getColor(content, 11));
    ui->label_u17->setColor(textColor->getColor(content, 12));
    ui->label_u18->setColor(textColor->getColor(content, 13));
    ui->label_u19->setColor(textColor->getColor(content, 14));
    ui->label_u20->setColor(textColor->getColor(content, 15));
    ui->label_u21->setColor(textColor->getColor(content, 16));
    ui->label_u22->setColor(textColor->getColor(content, 17));
    ui->label_u23->setColor(textColor->getColor(content, 18));
    ui->label_u24->setColor(textColor->getColor(content, 19));
    ui->label_u25->setColor(textColor->getColor(content, 20));
    ui->label_u26->setColor(textColor->getColor(content, 21));
    ui->label_u27->setColor(textColor->getColor(content, 22));
    ui->label_u28->setColor(textColor->getColor(content, 23));
    ui->label_u29->setColor(textColor->getColor(content, 24));
    ui->label_u30->setColor(textColor->getColor(content, 25));
    ui->label_u31->setColor(textColor->getColor(content, 26));
    ui->label_u32->setColor(textColor->getColor(content, 27));
    ui->label_u33->setColor(textColor->getColor(content, 28));
    ui->label_u34->setColor(textColor->getColor(content, 29));
    ui->label_u35->setColor(textColor->getColor(content, 30));
    ui->label_u36->setColor(textColor->getColor(content, 31));
    ui->label_u37->setColor(textColor->getColor(content, 32));
    ui->label_u38->setColor(textColor->getColor(content, 33));
    ui->label_u39->setColor(textColor->getColor(content, 34));
    ui->label_u40->setColor(textColor->getColor(content, 35));
    ui->label_u41->setColor(textColor->getColor(content, 36));
    ui->label_u42->setColor(textColor->getColor(content, 37));
    ui->label_u43->setColor(textColor->getColor(content, 38));
}

void MainWindow::on_actionSave_triggered() {
    if (path.isEmpty())
    {
        QMessageBox::critical(this, "Error", "Open a file first!");
        return;
    }
    QFile file(this->path);
    if(!file.open(QIODevice::ReadWrite)) {
        QMessageBox::critical(this, "Error", "Can't open file!");
        return;
    }
    file.write(content);
    file.close();
    QMessageBox::information(this, "Operation finished", "File saved!");
}

void MainWindow::on_actionExit_triggered() {
    QMessageBox::StandardButton message =
            QMessageBox::question(this, "", "Exit program? All unsaved changes will be lost!");
    if (message == QMessageBox::Yes)
        QApplication::quit();
}

void MainWindow::setGlowColor(QColor color, int upgrade, int type) {
    weaponGlow->setColor(content, color, upgrade, type);
}

void MainWindow::setTableColor(QColor color, int number) {
    textColor->setColor(content, color, number);
}
