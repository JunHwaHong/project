#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/home/hong/Desktop/Database/DB/database.db");

    if(!mydb.open())
        ui->label->setText("Failur to open the database");
    else
        ui->label->setText("Connected");
}

Login::~Login()
{
    delete ui;
}
