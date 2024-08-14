#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItem>
#include <QStandardItemModel>
#include "ContactList.h"

QT_BEGIN_NAMESPACE

namespace Ui
{
    class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:
    void on_addButton_clicked();

    void on_removeButton_clicked();

    void on_saveButton_clicked();

    void on_loadButton_clicked();

    void updateContactListView();

private:
    Ui::MainWindow *ui;
    ContactList contactList;
    QStandardItemModel *contactModel;
};
#endif // MAINWINDOW_H
