#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton12_clicked();

    void on_pushButton13_clicked();

    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton1_2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton7_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
