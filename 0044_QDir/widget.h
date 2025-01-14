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


    void on_chooseButton_clicked();

    void on_createDirButton_clicked();

    void on_dirExistButton_clicked();

    void on_dirOrFileButton_clicked();



    void on_folderContentsButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
