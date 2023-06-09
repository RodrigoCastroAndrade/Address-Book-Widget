#pragma once

#include <QtWidgets/QWidget>
#include "ui_addressbook.h"

class AddressBook : public QWidget
{
    Q_OBJECT

public:
    AddressBook(QWidget *parent = nullptr);
    ~AddressBook();

private:
    Ui::AddressBookClass ui;
    
private slots:
    void on_addButton_clicked();
    void on_deleteButton_clicked();
    void on_addressList_currentItemChanged();
};
