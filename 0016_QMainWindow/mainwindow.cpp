#include "mainwindow.h"
#include <QPushButton>
#include <QDebug>
#include <QMenuBar>
#include <QStatusBar>
#include <QAction>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Add central widget
    QPushButton * button = new QPushButton("Hello", this);
    setCentralWidget(button);

    // Declare Quit Action
    QAction * quitAction = new QAction("Quit");
    connect(quitAction, &QAction::triggered, [=](){
        QApplication::quit();
    });

    // Add menus
    QMenu * fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction(quitAction);
    menuBar()->addMenu("Edit");
    menuBar()->addMenu("window");
    menuBar()->addMenu("Settings");
    menuBar()->addMenu("Help");

    // Add status bar message
    statusBar()->showMessage("Uploading File ...", 3000);
    //statusBar()->clearMessage();

}

MainWindow::~MainWindow()
{
}

QSize MainWindow::sizeHint() const
{
    return QSize(800, 500);
}

