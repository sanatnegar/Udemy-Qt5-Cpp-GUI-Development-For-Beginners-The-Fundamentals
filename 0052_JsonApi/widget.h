#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QNetworkProxy>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_fetchButton_clicked();

    void dataReadyRead();
    void dataReadFinished();

private:
    Ui::Widget *ui;

    QNetworkAccessManager * mNetManager;
    QNetworkReply *mNetReply;
    QByteArray * mDataBuffer;
};
#endif // WIDGET_H
