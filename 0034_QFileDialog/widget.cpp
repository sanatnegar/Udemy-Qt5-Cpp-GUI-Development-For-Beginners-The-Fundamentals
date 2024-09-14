#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    /*
    // getExistingDirectory
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    qDebug() << "You chosed dir is: " << dir;
    */

    /*
    // gtOpenFileName
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "/home", tr("Images (*.png *.xpm *.jpg"));
    qDebug() << "You chosed file is: " << fileName;
    */

    /*
    // getOpenFileNames
    QStringList files = QFileDialog::getOpenFileNames(
                this,
                "Select one or more files to open",
                "/home",
                "Images (*.png *.xpm *.jpg");

    qDebug() << "You chosed files are: " << files;
    */

    // getSaveFileName
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Save File"),
                                                    "/home",
                                                    tr("Images (*.png *.xpm *.jpg)"));
    qDebug() << "Your chosen filename is: " << fileName;
}
