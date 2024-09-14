#include "customdialog.h"
#include "ui_customdialog.h"

CustomDialog::CustomDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomDialog)
{
    ui->setupUi(this);
    // Set style sheet on specific widget
    ui->pushButton->setStyleSheet("QPushButton{background-color : red;}");
}

CustomDialog::~CustomDialog()
{
    delete ui;
}
