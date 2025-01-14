#include "widget.h"
#include "ui_widget.h"
#include <QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //QGridLayout * layout = new QGridLayout(this);
    QGridLayout * layout = new QGridLayout();

    // First Row
    layout->addWidget(ui->button1,0,0);
    layout->addWidget(ui->button2,0,1);
    layout->addWidget(ui->button3,0,2,2,1);

    // Second Row
    layout->addWidget(ui->button4,1,0);
    layout->addWidget(ui->button5,1,1);

    // Third Row
    layout->addWidget(ui->button7,2,0,1,2);
    layout->addWidget(ui->button9,2,2);

    setLayout(layout);
}

Widget::~Widget()
{
    delete ui;
}

