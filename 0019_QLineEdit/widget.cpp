#include "widget.h"
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //  First Name
    QLabel * firstNameLabel = new QLabel("First Name", this);
    firstNameLabel->setMinimumSize(70, 50);
    firstNameLabel->move(10, 10);

    QLineEdit * firstNameLineEdit = new QLineEdit(this);
    firstNameLineEdit->setMinimumSize(200,50);
    firstNameLineEdit->move(100, 10);

    //  Last Name
    QLabel * lastNameLabel = new QLabel("Last Name", this);
    lastNameLabel->setMinimumSize(70, 50);
    lastNameLabel->move(10, 70);

    QLineEdit * lastNameLineEdit = new QLineEdit(this);
    lastNameLineEdit->setMinimumSize(200, 50);
    lastNameLineEdit->move(100, 70);

    //  City
    QLabel * cityLabel = new QLabel("City", this);
    cityLabel->setMinimumSize(70, 50);
    cityLabel->move(10, 130);

    QLineEdit * cityLineEdit = new QLineEdit(this);
    cityLineEdit->setMinimumSize(200,50);
    cityLineEdit->move(100, 130);

    QFont buttonFont("Times", 20, QFont::Bold);
    QPushButton * button = new QPushButton("Grab Data", this);
    button->setFont(buttonFont);
    button->move(80, 190);

    connect(button, &QPushButton::clicked, [=](){
        QString firstName = firstNameLineEdit->text();
        QString lastName = lastNameLineEdit->text();
        QString city = cityLineEdit->text();

        if (!firstName.isEmpty() && !lastName.isEmpty() && !city.isEmpty())
        {
            qDebug() << "First name is: " << firstName;
            qDebug() << "Last name is : " << lastName;
            qDebug() << "City is: "<< city;

        }
        else
        {
            qDebug() << "One field is empty"   ;
        }

    });

    // Respond to signals from QLineEdit
    connect(firstNameLineEdit, &QLineEdit::cursorPositionChanged, [=](){
        qDebug() << "The current position is: " << firstNameLineEdit->cursorPosition();
    });

    // Editing Finished Signal
    connect(firstNameLineEdit, &QLineEdit::editingFinished, [=](){
        qDebug() << "Editing finished";
    });

    // Return Pressed Signal
    connect(firstNameLineEdit, &QLineEdit::returnPressed, [=](){
        qDebug() << "Return pressed";
    });

    // Selection Changed Signal
    connect(firstNameLineEdit, &QLineEdit::selectionChanged, [=](){
        qDebug() << "Selection changed";
    });

    // Text Changed Signal
    connect(firstNameLineEdit, &QLineEdit::textChanged, [=](){
        qDebug() << "Text changed to: " << firstNameLineEdit->text();
    });

    // Text Edited Signal
    connect(firstNameLineEdit, &QLineEdit::textEdited, [=](){
        qDebug() << "Text edited and changed to: " << firstNameLineEdit->text();
    });

    // Change text in QLineEdit programmatically
    //lastNameLineEdit->setText("Say your last name");

    // Hint text
    firstNameLineEdit->setPlaceholderText("Firstname");
    lastNameLineEdit->setPlaceholderText("Lastname");
    cityLineEdit->setPlaceholderText("City");


}

Widget::~Widget()
{
}

