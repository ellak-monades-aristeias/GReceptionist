#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql>
#include <QMessageBox>
#include <QString>
#include <QDate>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_nk_euresi_dwmatiou_clicked()
{
    if (ui->nk_atoma->text().isEmpty())
    {
       QMessageBox msgBox;
       msgBox.setText("Εισάγετε αριθμό ατόμων");
       msgBox.exec();
    }
    else
    {
        ui->nk_textBrowser->setText("");
        QDate date1 = ui->nk_apo->date();
        QDate date2 = ui->nk_ews->date();
        QSqlQuery query;
        if (query.exec("SELECT arithmos,atoma FROM dwmatia where atoma>="+ui->nk_atoma->text()+" and atoma<="+ui->nk_atoma->text()+"+1"))
        {
            while (query.next())
            {
                QString arithmos = query.value(0).toString();
                qint8 flag=0;

                QSqlQuery query1;
                query1.exec("select apo,ews from kratiseis where arithmos='"+arithmos+"' union select apo,ews from pelates where arithmos='"+arithmos+"';");
                while (query1.next())
                {
                    QDate date3 = QDate::fromString(query1.value(0).toString(), "d'/'M'/'yyyy");
                    QDate date4 = QDate::fromString(query1.value(1).toString(), "d'/'M'/'yyyy");

                    if ( ( (date1.toJulianDay() >= date3.toJulianDay()) & (date1.toJulianDay() <= date4.toJulianDay()) ) |
                         ( (date2.toJulianDay() >= date3.toJulianDay()) & (date2.toJulianDay() <= date4.toJulianDay()) ) |
                         ( (date1.toJulianDay() <= date3.toJulianDay()) & (date2.toJulianDay() >= date4.toJulianDay()) ) )
                    {
                        flag = 1;
                    }
                }
                if (flag==0)
                {
                    QString name = "Δωμάτειο "+arithmos+" για "+query.value(1).toString()+" άτομα \n";
                    ui->nk_textBrowser->append(name);
                }
            }
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Αδυναμία αναζήτησης!");
            msgBox.exec();
        }
    }
}

void MainWindow::on_nk_eisagwgi_kratisis_clicked()
{
    if ( (ui->nk_apo->text().isEmpty()) | (ui->nk_ews->text().isEmpty() ) | (ui->nk_atoma->text().isEmpty() ) | (ui->nk_arithmos->text().isEmpty() )
         | (ui->nk_onoma->text().isEmpty() ) | (ui->nk_epitheto->text().isEmpty() ) | (ui->nk_tilefwno->text().isEmpty() ) )
    {
       QMessageBox msgBox;
       msgBox.setText("Εισάγετε όλα τα στοιχεία για την κράτηση");
       msgBox.exec();
    }
    else
    {
        QSqlQuery query;
        QString apo = ui->nk_apo->text();
        QString ews = ui->nk_ews->text();
        QString arithmos = ui->nk_arithmos->text();
        QString atoma = ui->nk_atoma->text();
        QString onoma = ui->nk_onoma->text();
        QString epitheto = ui->nk_epitheto->text();
        QString tilefwno = ui->nk_tilefwno->text();

        if (query.exec("INSERT INTO `kratiseis`(`ID`,`apo`,`ews`,`arithmos`,`atoma`,`onoma`,`epitheto`,`tilefwno`) VALUES (NULL,'" +apo+ "','" +ews+ "','" +arithmos+ "','" +atoma+ "','" +onoma+ "','" +epitheto+ "','" +tilefwno+ "');"))
        {
            QMessageBox msgBox;
            msgBox.setText("Η κράτηση καταχωρήθηκε επιτυχώς!");
            msgBox.exec();
            ui->nk_arithmos->clear();
            ui->nk_atoma->clear();
            ui->nk_onoma->clear();
            ui->nk_epitheto->clear();
            ui->nk_tilefwno->clear();
            ui->nk_textBrowser->clear();
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Αδυναμία καταχώρησης κράτησης!");
            msgBox.exec();
        }
    }
}

void MainWindow::on_ea_anazitisi_kratisis_clicked()
{
    ui->ea_textBrowser->setText("");
    QDate date1 = ui->ea_imeromina->date();

    QSqlQuery query;
    if (query.exec("SELECT apo,ews,arithmos,onoma,epitheto FROM `kratiseis`"))
    {
        while (query.next())
        {
            QDate date2 = QDate::fromString(query.value(0).toString(), "d'/'M'/'yyyy");
            QDate date3 = QDate::fromString(query.value(1).toString(), "d'/'M'/'yyyy");
            if ( (date1.toJulianDay() >= date2.toJulianDay()) & (date1.toJulianDay() <= date3.toJulianDay()) )
                {
                    QString name = ""+query.value(0).toString()+"-"+query.value(1).toString()+", δωμάτιο " +query.value(2).toString()+", "+query.value(3).toString()+" "+query.value(4).toString()+"\n";
                    ui->ea_textBrowser->append(name);
                }
        }
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Αδυναμία αναζήτησης!");
        msgBox.exec();
    }
}

void MainWindow::on_ea_epivevaiwsi_kratisis_1_clicked()
{
    if ( (ui->ea_arithmos_1->text().isEmpty()) | (ui->ea_tautotita_1->text().isEmpty() ) )
    {
       QMessageBox msgBox;
       msgBox.setText("Εισάγετε αριθμό δωματίου και αριθμό ταυτότητας");
       msgBox.exec();
    }
    else
    {
        ui->ea_textBrowser->setText("");
        QSqlQuery query;
        if (query.exec("SELECT apo,ews,arithmos,onoma,epitheto FROM `kratiseis` WHERE apo='"+ui->ea_imeromina->text()+"' and arithmos='"+ui->ea_arithmos_1->text()+"'"))
        {
            while (query.next())
            {
                QString apo = query.value(0).toString();
                QString ews = query.value(1).toString();
                QString onoma = query.value(3).toString();
                QString epitheto = query.value(4).toString();

                if (query.exec("INSERT INTO `pelates`(`ID`,`onoma`,`epitheto`,`tautotita`,`arithmos`,`apo`,`ews`) VALUES (NULL,'" + onoma + "','" + epitheto + "','" + ui->ea_tautotita_1->text() + "','" + ui->ea_arithmos_1->text() + "','" + apo + "','" + ews + "');"))
                {
                    if (query.exec("DELETE FROM `kratiseis` WHERE apo='"+apo+"' and arithmos='"+ui->ea_arithmos_1->text()+"';"))
                    {
                        QMessageBox msgBox;
                        msgBox.setText("Το Check-In ολοκληρώθηκε με επιτυχία!");
                        msgBox.exec();
                        ui->ea_arithmos_1->clear();
                        ui->ea_tautotita_1->clear();
                    }
                    else
                    {
                        QMessageBox msgBox;
                        msgBox.setText("Αποτυχία Check-In! \nΑδυναμία διαγραφής κράτησης");
                        msgBox.exec();
                    }
                }
                else
                {
                    QMessageBox msgBox;
                    msgBox.setText("Αποτυχία Check-In! \nΑδυναμία εγγραφής βάσης");
                    msgBox.exec();
                }
            }
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Τα στοιχεία ημερομηνία και αριθμός δωματίου δεν συμφωνούν με αυτά της κράτησης");
            msgBox.exec();
        }
    }


}

void MainWindow::on_ea_akurwsi_kratisis_clicked()
{
    if (ui->ea_arithmos_1->text().isEmpty())
    {
       QMessageBox msgBox;
       msgBox.setText("Εισάγετε αριθμό δωματίου");
       msgBox.exec();
    }
    else
    {
        ui->ea_textBrowser->setText("");
        QSqlQuery query;
        if (query.exec("SELECT apo FROM `kratiseis` WHERE apo='"+ui->ea_imeromina->text()+"' and arithmos='"+ui->ea_arithmos_1->text()+"'"))
        {
            while (query.next())
            {
                QString apo = query.value(0).toString();

                if (query.exec("DELETE FROM `kratiseis` WHERE apo='"+apo+"' and arithmos='"+ui->ea_arithmos_1->text()+"';"))
                {
                    QMessageBox msgBox;
                    msgBox.setText("Η κράτηση ακυρώθηκε με επιτυχία!");
                    msgBox.exec();
                    ui->ea_arithmos_1->clear();
                }
                else
                {
                    QMessageBox msgBox;
                    msgBox.setText("Αδυναμία διαγραφής κράτησης");
                    msgBox.exec();
                }
            }
        }
    }
}


void MainWindow::on_ea_epivevaiwsi_kratisis_2_clicked()
{
    if ( (ui->ea_onoma->text().isEmpty()) | (ui->ea_epitheto->text().isEmpty() ) | (ui->ea_arithmos_2->text().isEmpty() ) | (ui->ea_tautotita_2->text().isEmpty() ))
    {
       QMessageBox msgBox;
       msgBox.setText("Εισάγετε όλα τα απαραίτητα στοιχεία");
       msgBox.exec();
    }
    else
    {
        QSqlQuery query;
        if (query.exec("SELECT * FROM `pelates` WHERE apo='"+ui->ea_apo->text()+"' and arithmos='"+ui->ea_arithmos_2->text()+"';"))
        {
            if (query.value(0).isNull())
            {
                if (query.exec("INSERT INTO `pelates`(`ID`,`onoma`,`epitheto`,`tautotita`,`arithmos`,`apo`,`ews`) VALUES (NULL,'"+ui->ea_onoma->text()+"','"+ui->ea_epitheto->text()+"','"+ui->ea_tautotita_2->text()+"','"+ui->ea_arithmos_2->text()+"','"+ui->ea_apo->text()+"','"+ui->ea_ews->text()+"');"))
                {
                    QMessageBox msgBox;
                    msgBox.setText("Το Check-In ολοκληρώθηκε με επιτυχία!");
                    msgBox.exec();
                    ui->ea_onoma->clear();
                    ui->ea_epitheto->clear();
                    ui->ea_arithmos_2->clear();
                    ui->ea_tautotita_2->clear();
                }
                else
                {
                    QMessageBox msgBox;
                    msgBox.setText("Αποτυχία Check-In! \nΑδυναμία εγγραφής βάσης");
                    msgBox.exec();
                }
            }
            else
            {
                QMessageBox msgBox;
                msgBox.setText("Υπάρχει ήδη καταχώρηση με αυτά τα στοιχεία");
                msgBox.exec();
            }
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Αδυναμία σύνδεσης με τη βάση");
            msgBox.exec();
        }
    }
}

void MainWindow::on_dx_anazitisi_clicked()
{
    ui->dx_textBrowser->setText("");
    QSqlQuery query;
    if (query.exec("SELECT arithmos,atoma FROM dwmatia"))
    {
        while (query.next())
        {
            QString name = ""+query.value(0).toString()+",  Άτομα: "+query.value(1).toString()+"\n";
            ui->dx_textBrowser->append(name);
        }
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Αδυναμία σύνδεσης με τη βάση");
        msgBox.exec();
    }
}

void MainWindow::on_dx_diagrafi_dwmatiou_clicked()
{
    if ( (ui->dx_arithmos->text().isEmpty()) | (ui->dx_atoma->text().isEmpty() ) )
    {
       QMessageBox msgBox;
       msgBox.setText("Εισάγετε αριθμό δωματίου και αριθμό ατόμων");
       msgBox.exec();
    }
    else
    {
        QSqlQuery query;
        if (query.exec("DELETE FROM `dwmatia` WHERE arithmos='"+ui->dx_arithmos->text()+"' and atoma='"+ui->dx_atoma->text()+"';"))
        {
            QMessageBox msgBox;
            msgBox.setText("Επιτυχής διαγραφή δωματίου");
            msgBox.exec();
            ui->dx_arithmos->clear();
            ui->dx_atoma->clear();
            ui->dx_textBrowser->setText("");
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Αδυναμία σύνδεσης με τη βάση");
            msgBox.exec();
        }
    }
}

void MainWindow::on_dx_eisagwgi_dwmatiou_clicked()
{
    if ( (ui->dx_arithmos->text().isEmpty()) | (ui->dx_atoma->text().isEmpty() ) )
    {
       QMessageBox msgBox;
       msgBox.setText("Εισάγετε αριθμό δωματίου και αριθμό ατόμων");
       msgBox.exec();
    }
    else
    {
        QSqlQuery query;
        if (query.exec("INSERT INTO `dwmatia`(`ID`,`arithmos`,`atoma`) VALUES (NULL,'"+ui->dx_arithmos->text()+"','"+ui->dx_atoma->text()+"');"))
        {
            QMessageBox msgBox;
            msgBox.setText("Επιτυχής εισαγωγή δωματίου");
            msgBox.exec();
            ui->dx_arithmos->clear();
            ui->dx_atoma->clear();
            ui->dx_textBrowser->setText("");
        }
        else
        {
            QMessageBox msgBox;
            msgBox.setText("Αδυναμία σύνδεσης με τη βάση");
            msgBox.exec();
        }
    }
}

void MainWindow::on_ed_anazitisi_clicked()
{
    ui->ed_textBrowser_1->setText("");
    ui->ed_textBrowser_2->setText("");
    ui->ed_textBrowser_3->setText("");
    QDate date1 = ui->ed_imerominia->date();

    QSqlQuery query;
    if (query.exec("SELECT arithmos,atoma FROM dwmatia;"))
    {
        while (query.next())
        {
            qint8 flag=0;

            QSqlQuery query1;
            if (query1.exec("SELECT apo,ews FROM kratiseis where arithmos='"+query.value(0).toString()+"';"))
            {
                while (query1.next())
                {
                    QDate date2 = QDate::fromString(query1.value(0).toString(), "d'/'M'/'yyyy");
                    QDate date3 = QDate::fromString(query1.value(1).toString(), "d'/'M'/'yyyy");
                    if ( (date1.toJulianDay() >= date2.toJulianDay()) & (date1.toJulianDay() < date3.toJulianDay()) )
                        {
                            QString name = ""+query.value(0).toString()+",  Άτομα: "+query.value(1).toString()+"\n";
                            ui->ed_textBrowser_2->append(name);
                            flag=1;
                        }
                }
            }

            QSqlQuery query2;
            if (query2.exec("SELECT apo,ews FROM pelates where arithmos='"+query.value(0).toString()+"';"))
            {
                while (query2.next())
                {
                    QDate date2 = QDate::fromString(query2.value(0).toString(), "d'/'M'/'yyyy");
                    QDate date3 = QDate::fromString(query2.value(1).toString(), "d'/'M'/'yyyy");
                    if ( (date1.toJulianDay() >= date2.toJulianDay()) & (date1.toJulianDay() < date3.toJulianDay()) & (flag==0) )
                    {
                        QString name = ""+query.value(0).toString()+",  Άτομα: "+query.value(1).toString()+"\n";
                        ui->ed_textBrowser_1->append(name);
                        flag=1;
                    }
                }
            }

            if (flag==0)
            {
                QString name = ""+query.value(0).toString()+",  Άτομα: "+query.value(1).toString()+"\n";
                ui->ed_textBrowser_3->append(name);
                flag=1;
            }

            if ( flag==0 )
            {
                QMessageBox msgBox;
                msgBox.setText("Error!!!");
                msgBox.exec();
            }
            else
            {
                flag=0;
            }
        }
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Αδυναμία σύνδεσης με τη βάση");
        msgBox.exec();
    }
}
