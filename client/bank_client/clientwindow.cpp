#include "clientwindow.h"
#include "ui_clientwindow.h"
#include <QDebug>

ClientWindow::ClientWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ClientWindow)
{
    ui->setupUi(this);

    ui->comboBox_operation->addItem("Withdraw money");
    ui->comboBox_operation->addItem("Deposit money");
    ui->comboBox_operation->addItem("Transfer money");
    ui->comboBox_operation->addItem("Checking account");
    ui->comboBox_operation->addItem("The last 10 operations");

    ui->comboBox_account->clear();

    connect(ui->pushButton_close, SIGNAL(pressed()), this, SLOT(handleButtons()) );
    connect(ui->pushButton_enter, SIGNAL(pressed()), this, SLOT(handleButtons()) );
}

ClientWindow::~ClientWindow()
{
    delete ui;
}

void ClientWindow::handleButtons()
{
    QPushButton *button = (QPushButton*)sender();

    //qDebug() << button->text();
    if (button->text() == "Close")
        exit(0);

}
