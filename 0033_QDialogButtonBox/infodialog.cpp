#include "infodialog.h"
#include "ui_infodialog.h"
#include <QDebug>

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton = ui->buttonBox->standardButton(button);
    if(stdButton == QDialogButtonBox::Ok)
    {
        qDebug() << "OK buton clicked";
    }
    if(stdButton == QDialogButtonBox::Save)
    {
        qDebug() << "Save buton clicked";
    }
    if(stdButton == QDialogButtonBox::SaveAll)
    {
        qDebug() << "Save All buton clicked";
    }
    if(stdButton == QDialogButtonBox::Open)
    {
        qDebug() << "Open buton clicked";
    }
    if(stdButton == QDialogButtonBox::No)
    {
        qDebug() << "No buton clicked";
    }
    if(stdButton == QDialogButtonBox::NoToAll)
    {
        qDebug() << "No To All buton clicked";
    }
    if(stdButton == QDialogButtonBox::Cancel)
    {
        qDebug() << "Cancel buton clicked";
    }
}
