#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStandardItemModel>

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
    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::Widget *ui;
    QStandardItemModel * treeModel;
    QStandardItemModel * tableModel;
};
#endif // WIDGET_H
