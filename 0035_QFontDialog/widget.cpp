#include "widget.h"
#include "ui_widget.h"
#include <QFontDialog>
#include <QDebug>
#include <QMessageBox>

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


void Widget::on_chooseFontButton_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok,
                                      QFont("Helvetica [Cronyx]",10),
                                      this);
    if(ok){
        // the user clicked OK and font is set
        ui->label->setFont(font);
    }
    else
    {
        // the user canceled the dialog and font is set to the initial value
        QMessageBox::information(this, "Message", "User did not choose font");
    }

}
