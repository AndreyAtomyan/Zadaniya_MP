#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <QTime>
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    int massSize;
    int *mass;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_action_sort_triggered();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_action_3_triggered();

    void on_action_2_triggered();

    void CleanAndCreateFile(QString fileName);

    void on_action_triggered();

private:
    QString dirF;

public:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
