#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QMainWindow>
//#include <QStringList>

namespace Ui {
class ClientWindow;
}

class ClientWindow : public QMainWindow
{
    Q_OBJECT

public:
    enum {
        WITHDRAW,
        DEPOSIT,
        TRANSFER,
        GET_ACCOUNT,
        GET_INFO
    } operation_t;

    explicit ClientWindow(QWidget *parent = 0);
    ~ClientWindow();

private:
    Ui::ClientWindow *ui;

private slots:
    void handleButtons();
};

#endif // CLIENTWINDOW_H
