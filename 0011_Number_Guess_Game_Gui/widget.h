#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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
    void on_btnGuess_clicked();

    void on_btnStartOver_clicked();

private:
    Ui::Widget *ui;
    int secretNumber, guessNumber;
};
#endif // WIDGET_H
