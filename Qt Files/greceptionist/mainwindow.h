#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_nk_euresi_dwmatiou_clicked();
    void on_nk_eisagwgi_kratisis_clicked();
    void on_ea_anazitisi_kratisis_clicked();
    void on_ea_epivevaiwsi_kratisis_1_clicked();
    void on_ea_epivevaiwsi_kratisis_2_clicked();
    void on_ea_akurwsi_kratisis_clicked();
    void on_dx_anazitisi_clicked();
    void on_dx_eisagwgi_dwmatiou_clicked();
    void on_dx_diagrafi_dwmatiou_clicked();
    void on_ed_anazitisi_clicked();

};

#endif // MAINWINDOW_H
