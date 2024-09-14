#include "widget.h"
#include "ui_widget.h"
#include <QNetworkReply>
#include <QDebug>
#include <QNetworkProxy>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QNetworkProxy * proxy = new QNetworkProxy();
    proxy->setHostName("192.168.5.6");
    proxy->setPort(8080);
    proxy->setUser("username");
    proxy->setPassword("password");

    netManager = new QNetworkAccessManager(this);
    netReply = nullptr;
    mDataBuffer = new QByteArray();

    // Define net requests
    QNetworkRequest request;
    request.setUrl(QUrl("http://freeelec.ir/"));


    netManager->setProxy(*proxy);
    netReply = netManager->get(request);
    connect(netReply, &QIODevice::readyRead,this, &Widget::dataReadyToRead);
    connect(netReply, &QNetworkReply::finished, this, &Widget::dataReadFinished);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::dataReadyToRead()
{
    qDebug() << "Some data available";
    mDataBuffer->append(netReply->readAll());
}

void Widget::dataReadFinished()
{
    if(netReply->error())
    {
        qDebug() << "Error: " << netReply->errorString();
    }
    else
    {
        ui->textEdit->setPlainText(QString(*mDataBuffer));
    }
}

