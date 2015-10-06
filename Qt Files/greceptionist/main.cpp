#include "mainwindow.h"

#include <QApplication>
#include <QtSql>
#include <QDebug>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();


    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dir = QCoreApplication::applicationDirPath();
    qDebug() << dir;
    db.setDatabaseName(""+dir+"/database.db");



    if (!db.open()) {
        qDebug() << "Error!!!";
    }
    else
    {
        qDebug() << "Connected!";
        //db.close();

}
    return a.exec();
}

