#include "infodialog.h"
#include "ui_infodialog.h"

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

void InfoDialog::on_okButton_clicked()
{
    // Collect Information
    QString userPosition = ui->positionLineEdit->text();
    if(!userPosition.isEmpty())
    {
        position = userPosition;

        if(ui->windowsRadioButton->isChecked())
        {
            favoritesOs = "Windows"   ;
        }

        if(ui->macRadioButton->isChecked())
        {
            favoritesOs = "Mac";
        }

        if(ui->linuxRadioButton->isChecked())
        {
            favoritesOs = "Linux";
        }
    }
    // Accept the dialog
    accept();
}

void InfoDialog::on_cancelButton_clicked()
{
    // Reject the dialog
    reject();
}

QString InfoDialog::getFavoritesOs() const
{
    return favoritesOs;
}

QString InfoDialog::getPosition() const
{
    return position;
}

