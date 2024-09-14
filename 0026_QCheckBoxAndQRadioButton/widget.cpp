#include "widget.h"
#include "ui_widget.h"
#include <QButtonGroup>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QButtonGroup * buttonGroup = new QButtonGroup(this);

    buttonGroup->addButton(ui->windowsCheckBox);
    buttonGroup->addButton(ui->macCheckBox);
    buttonGroup->addButton(ui->linuxCheckBox);

    buttonGroup->setExclusive(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_windowsCheckBox_toggled(bool checked)
{
    if(checked){
        qDebug() << "Windows is checked";
    }
    else
    {
        qDebug() << "Windows is unchecked";
    }
}

void Widget::on_beerCheckBox_toggled(bool checked)
{
    if(checked){
        qDebug() << "Beer is checked";
    }
    else
    {
        qDebug() << "Beer is unchecked";
    }
}

void Widget::on_aRadioButton_toggled(bool checked)
{
    if(checked){
        qDebug() << "A radio button is checked";
    }
    else
    {
        qDebug() << "A radio button is unchecked";
    }
}

void Widget::on_grabDataButton_clicked()
{
    if(ui->windowsCheckBox->isChecked())
    {
        qDebug() << "Windows is checked";
    }
    else
    {
        qDebug() << "Windows is unchecked";
    }

    if(ui->beerCheckBox->isChecked())
    {
        qDebug() << "Beer is checked";
    }
    else
    {
        qDebug() << "Beer is unchecked";
    }

    if(ui->aRadioButton->isChecked())
    {
        qDebug() << "A radio button is checked";
    }
    else
    {
        qDebug() << "A radio button is unchecked";
    }
}

void Widget::on_setStateButton_clicked()
{
    // Exclusive
    if(ui->windowsCheckBox->isChecked())
    {
        ui->windowsCheckBox->setChecked(false);
    }
    else
    {
        ui->windowsCheckBox->setChecked(true);
    }

    // None Exclusive
    if(ui->beerCheckBox->isChecked())
    {
        ui->beerCheckBox->setChecked(false);
    }
    else
    {
        ui->beerCheckBox->setChecked(true);
    }
}
