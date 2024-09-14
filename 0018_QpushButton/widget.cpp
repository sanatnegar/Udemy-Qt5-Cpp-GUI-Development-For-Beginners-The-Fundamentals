#include "widget.h"
#include <QPushButton>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // Clicked Signal
    QFont buttonFont("Times", 20, QFont::Bold);
    QPushButton * button = new QPushButton("Button 1", this);
    button->setMinimumSize(200, 100);
    button->setFont(buttonFont);
    connect(button, &QPushButton::clicked, [=](){
        qDebug() << "Button Clicked";
    });

    // Pressed and Released Signals
    QFont button2Font("Times", 20, QFont::Bold);
    QPushButton * button2 = new QPushButton("Button 2", this);
    button2->setMinimumSize(200, 100);
    button2->move(205,0);
    button2->setFont(button2Font);
    connect(button2, &QPushButton::pressed, [=](){
        qDebug() << "Button Pressed";
    });

    connect(button2, &QPushButton::released, [=](){
        qDebug() << "Button Released";
    });
}

Widget::~Widget()
{
}

