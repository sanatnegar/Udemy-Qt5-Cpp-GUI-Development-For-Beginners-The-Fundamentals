#include "widget.h"
#include "ui_widget.h"
#include <stdlib.h>
#include <time.h>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Initialize
    srand(time(NULL));

    // Generate(1~10)
    secretNumber = rand() % 10 + 1;
    // qDebug() << "Secrect number generated: " << QString::number(secretNumber);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btnGuess_clicked()
{
    guessNumber = ui->sbNumber->value();
    // qDebug() << "The guess number is: " << QString::number(guessNumber);

    if(guessNumber == secretNumber)
    {
        // Congratulations
         ui->lblMessage->setText("Congratulations, number is: " + QString::number(secretNumber));

         // Disable the guess button
         ui->btnGuess->setDisabled(true);

    }
    else
    {
        if(secretNumber < guessNumber)
        {
            ui->lblMessage->setText("Number is lower than that");
        }

        if(secretNumber > guessNumber)
        {
            ui->lblMessage->setText("Number is higher than that");
        }
    }
}

void Widget::on_btnStartOver_clicked()
{
    // Reseting widgets
    ui->btnGuess->setDisabled(false);
    ui->btnStartOver->setDisabled(true);
    ui->sbNumber->setValue(1);
    ui->lblMessage->setText("-");

    // Generate another random number between (1~10)
    secretNumber = rand() % 10 + 1;
    // qDebug() << "Secrect number generated: " << QString::number(secretNumber);

}
