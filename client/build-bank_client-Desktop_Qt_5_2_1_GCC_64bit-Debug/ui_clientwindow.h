/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_enter;
    QLineEdit *lineEdit_nameSurname;
    QLineEdit *lineEdit_cardNumber;
    QLineEdit *lineEdit_pin;
    QComboBox *comboBox_account;
    QComboBox *comboBox_operation;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_close;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_amount;
    QLabel *label_6;

    void setupUi(QMainWindow *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName(QStringLiteral("ClientWindow"));
        ClientWindow->resize(739, 327);
        centralWidget = new QWidget(ClientWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_enter = new QPushButton(centralWidget);
        pushButton_enter->setObjectName(QStringLiteral("pushButton_enter"));
        pushButton_enter->setGeometry(QRect(650, 40, 80, 31));
        lineEdit_nameSurname = new QLineEdit(centralWidget);
        lineEdit_nameSurname->setObjectName(QStringLiteral("lineEdit_nameSurname"));
        lineEdit_nameSurname->setGeometry(QRect(14, 40, 331, 31));
        lineEdit_nameSurname->setMaxLength(64);
        lineEdit_nameSurname->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_cardNumber = new QLineEdit(centralWidget);
        lineEdit_cardNumber->setObjectName(QStringLiteral("lineEdit_cardNumber"));
        lineEdit_cardNumber->setGeometry(QRect(14, 100, 231, 31));
        lineEdit_cardNumber->setMaxLength(18);
        lineEdit_cardNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_pin = new QLineEdit(centralWidget);
        lineEdit_pin->setObjectName(QStringLiteral("lineEdit_pin"));
        lineEdit_pin->setGeometry(QRect(364, 40, 61, 31));
        lineEdit_pin->setMaxLength(4);
        lineEdit_pin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox_account = new QComboBox(centralWidget);
        comboBox_account->setObjectName(QStringLiteral("comboBox_account"));
        comboBox_account->setGeometry(QRect(434, 40, 191, 31));
        comboBox_operation = new QComboBox(centralWidget);
        comboBox_operation->setObjectName(QStringLiteral("comboBox_operation"));
        comboBox_operation->setGeometry(QRect(254, 100, 181, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(124, 20, 121, 16));
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        label->setAlignment(Qt::AlignCenter);
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 140, 701, 161));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 699, 159));
        scrollAreaWidgetContents->setMouseTracking(true);
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_close = new QPushButton(centralWidget);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(650, 80, 80, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(384, 20, 31, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(84, 80, 91, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(484, 20, 81, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(310, 80, 71, 20));
        lineEdit_amount = new QLineEdit(centralWidget);
        lineEdit_amount->setObjectName(QStringLiteral("lineEdit_amount"));
        lineEdit_amount->setGeometry(QRect(450, 100, 171, 31));
        lineEdit_amount->setMaxLength(15);
        lineEdit_amount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(500, 80, 91, 20));
        ClientWindow->setCentralWidget(centralWidget);

        retranslateUi(ClientWindow);

        QMetaObject::connectSlotsByName(ClientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ClientWindow)
    {
        ClientWindow->setWindowTitle(QApplication::translate("ClientWindow", "ClientWindow", 0));
        pushButton_enter->setText(QApplication::translate("ClientWindow", "Enter", 0));
        lineEdit_nameSurname->setInputMask(QString());
        lineEdit_nameSurname->setText(QString());
        comboBox_account->clear();
        comboBox_account->insertItems(0, QStringList()
         << QApplication::translate("ClientWindow", "New Item", 0)
        );
        comboBox_account->setCurrentText(QApplication::translate("ClientWindow", "New Item", 0));
        label->setText(QApplication::translate("ClientWindow", "Name Surname", 0));
        pushButton_close->setText(QApplication::translate("ClientWindow", "Close", 0));
        label_2->setText(QApplication::translate("ClientWindow", "PIN", 0));
        label_3->setText(QApplication::translate("ClientWindow", "Card number", 0));
        label_4->setText(QApplication::translate("ClientWindow", "Account(s)", 0));
        label_5->setText(QApplication::translate("ClientWindow", "Operations", 0));
        lineEdit_amount->setInputMask(QString());
        label_6->setText(QApplication::translate("ClientWindow", "Amount, rub", 0));
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
