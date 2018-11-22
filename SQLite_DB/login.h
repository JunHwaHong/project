#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql/QtSql>
#include <QtDebug>
#include <QFileInfo>


namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
