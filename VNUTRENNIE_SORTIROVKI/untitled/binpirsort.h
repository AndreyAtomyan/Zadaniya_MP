#ifndef BINPIRSORT_H
#define BINPIRSORT_H

#include "mainwindow.h"

#include <QMainWindow>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <QTime>
#include <QFile>
#include <QFileDialog>
#include <fstream>
#include <QMessageBox>
#include <QDebug>

using namespace std;

namespace Ui {
class MainWindow;
}

class BinPirSOrt : public QMainWindow
{
    Q_OBJECT
public:
    explicit BinPirSOrt(QWidget *parent = 0);

    int massSize;
    int *mass;

signals:

protected slots:


};

#endif // BINPIRSORT_H
