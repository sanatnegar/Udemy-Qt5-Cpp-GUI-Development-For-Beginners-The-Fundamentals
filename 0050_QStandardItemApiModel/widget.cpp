#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    model = new QStandardItemModel(this);

    // Capture the root item
    QStandardItem * rootItem = model->invisibleRootItem();

    QStandardItem * africaItem = new QStandardItem("Africa");
    QStandardItem * rwandaItem = new QStandardItem("Rwanda");
    QStandardItem * musanzeItem = new QStandardItem("Musanze");
    QStandardItem * kigaliItem = new QStandardItem("Kigali");
    QStandardItem * UgandaItem = new QStandardItem("Uganda");
    QStandardItem * kampalaItem = new QStandardItem("Kampala");
    QStandardItem * entebbeItem = new QStandardItem("Entebbe");
    QStandardItem * asiaItem = new QStandardItem("Asia");
    QStandardItem * chinaItem = new QStandardItem("China");
    QStandardItem * shanghaiItem = new QStandardItem("Shanghai");
    QStandardItem * beijingtem = new QStandardItem("Beijing");
    QStandardItem * europeItem = new QStandardItem("Europe");
    QStandardItem * franceItem = new QStandardItem("France");
    QStandardItem * parisItem = new QStandardItem("Paris");
    QStandardItem * toulouseItem = new QStandardItem("Toulouse");

    // Define the tree structure

    // Africa
    rootItem->appendRow(africaItem);
    africaItem->appendRow(rwandaItem);
    africaItem->appendRow(UgandaItem);

    rwandaItem->appendRow(kigaliItem);
    rwandaItem->appendRow(musanzeItem);

    UgandaItem->appendRow(kampalaItem);
    UgandaItem->appendRow(entebbeItem);

    // Asia
    rootItem->appendRow(asiaItem);
    asiaItem->appendRow(chinaItem);
    chinaItem->appendRow(beijingtem);
    chinaItem->appendRow(shanghaiItem);

    // Europe
    rootItem->appendRow(europeItem);
    europeItem->appendRow(franceItem);
    franceItem->appendRow(parisItem);
    franceItem->appendRow(toulouseItem);

    ui->treeView->setModel(model);

    ui->treeView->expandAll();

    QItemSelectionModel * selectionModel = ui->treeView->selectionModel();
    connect(selectionModel,SIGNAL(selectionChanged(QItemSelection,QItemSelection)),this,
            SLOT(selectionChangedSlot(QItemSelection,QItemSelection)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::selectionChangedSlot(const QItemSelection &oldSelection, const QItemSelection &newSelection)
{
    qDebug() << "Clicked on something in the tree";

    QModelIndex currentIndex = ui->treeView->selectionModel()->currentIndex();
    QString data = model->data(currentIndex, Qt::DisplayRole).toString();

    // Find the hierarchy of the selected item
    int hierarchy = 1;
    QModelIndex seekRoot = currentIndex;
    while(seekRoot != QModelIndex())
    {
        seekRoot = seekRoot.parent();
        hierarchy++;
    }

    QString dataToShow = QString("%1, level %2").arg(data).arg(QString::number(hierarchy));
    setWindowTitle(dataToShow);
}

