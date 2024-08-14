#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      contactModel(new QStandardItemModel(this))
{
    ui->setupUi(this);

    setWindowTitle("Graphical Phonebook Creadted by Jun-Beom");

    ui->contactListView->setModel(contactModel);
    updateContactListView();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    QString phoneNumber = ui->phoneNumberLineEdit->text();
    QString emailAddress = ui->emailAddressLineEdit->text();

    Contact newContact(name, phoneNumber, emailAddress);
    contactList.addContact(newContact);

    ui->nameLineEdit->clear();
    ui->phoneNumberLineEdit->clear();
    ui->emailAddressLineEdit->clear();

    updateContactListView();
}


void MainWindow::on_removeButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    contactList.removeContact(name);

    ui->nameLineEdit->clear();
    ui->phoneNumberLineEdit->clear();
    ui->emailAddressLineEdit->clear();

    updateContactListView();
}


void MainWindow::on_saveButton_clicked()
{
    contactList.saveToFile("../ContactList.txt");
}


void MainWindow::on_loadButton_clicked()
{
    contactList.loadFromFile("../ContactList.txt");

    updateContactListView();
}

void MainWindow::updateContactListView()
{
    contactModel->clear(); // 모델 초기화

    // 연락처 목록 가져오기
    auto contacts = contactList.getAllContacts();

    // 모델에 연락처 추가
    for (const auto &contact: contacts)
    {
        QString contactInfo = QString("Name: %1, Phone: %2, Email: %3")
                .arg(contact.getName())
                .arg(contact.getPhoneNumber())
                .arg(contact.getEmailAddress());
        QStandardItem *item = new QStandardItem(contactInfo);
        contactModel->appendRow(item);
    }
}

