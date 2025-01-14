#include "widget.h"
#include "ui_widget.h"
#include "customtabelmodel.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->tableView->verticalHeader()->hide();
    // ui->tableView->horizontalHeader()->hide();

    CustomTableModel * model = new CustomTableModel(this);

    ui->tableView->setModel(model);
}

Widget::~Widget()
{
    delete ui;
}

