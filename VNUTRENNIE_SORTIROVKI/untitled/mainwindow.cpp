#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->textEdit->setEnabled(false);
    ui->progressBar->setMinimum(0);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_2_triggered() //БИНАРНАЯ ПИРАМИДАЛЬНАЯ СОРТИРОВКА
{
    ui->textEdit->clear();

    QTime tim;

    massSize = ui->textEdit_2->toPlainText().toInt();
    int mS = massSize;
    ui->textEdit_2->setEnabled(false);
    ui->progressBar->setMaximum(massSize);

    mass = new int[massSize];

    srand(time(NULL));

    for(int i=0;i<massSize;i++)
    {
        mass[i] = rand()%1000;
    }

    for(int i=0;i<massSize;i++)
    {
        ui->textBrowser->append(QString::number(mass[i]) + " ");
        ui->progressBar->setValue(i+1);
    }

  int buffer = 0;

  tim.start();
  ui->statusBar->showMessage("Выполняется сортировка!");

  while(massSize>0)
  {
    if(massSize != mS)
    {
        buffer = mass[0];
        mass[0] = mass[massSize];
        mass[massSize] = buffer;
        massSize--;
    }

    if(massSize<=0){break;}

    for(int j=0;j<mS;j++)
    {
    for(int i=(massSize/2);i>=0;i--)
    {
        if((!(mass[i] > mass[(2*i)])) && ((2*i) <= massSize))
        {
           buffer = mass[i];
           mass[i] = mass[(2*i)];
           mass[(2*i)] = buffer;
        }

        if((!(mass[i] > mass[((2*i) +1)])) && (((2*i) +1) <= massSize))
        {
           buffer = mass[i];
           mass[i] = mass[((2*i) +1)];
           mass[((2*i) +1)] = buffer;
        }
    }
    }
    if(massSize == mS)
    {
        massSize = massSize -1;
    }
  }

  ui->textEdit->setText(QString::number(tim.elapsed()));
  ui->statusBar->clearMessage();

  massSize = mS;

    for(int i=0;i<massSize;i++)
    {
        ui->textBrowser_2->append(QString::number(mass[i]) + " ");
        ui->progressBar->setValue(i+1);
    }

    delete[] mass;

    ui->textEdit_2->setEnabled(true);
}

void MainWindow::CleanAndCreateFile(QString fileName)
{

    QFile Cfile(fileName);
    Cfile.open(QIODevice::WriteOnly);
    if(!(Cfile.isOpen()))
    {
        QMessageBox::information(this, "Error", "Фаил не найден. Что-то пошло не так");
        ui->statusBar->showMessage("System Error");
        return;
    }

    Cfile.remove();
    Cfile.close();

    Cfile.open(QIODevice::WriteOnly);
    if(!(Cfile.isOpen()))
    {
        QMessageBox::information(this, "Error", "Ошибка работы с файлом.");
        ui->statusBar->showMessage("System Error");
        return;
    }

    Cfile.close();
    return;
}


void MainWindow::on_action_sort_triggered() //СОРТИРОВКА ФУНКЦИЕЙ SORT()
{
    ui->textEdit->clear();

    massSize = ui->textEdit_2->toPlainText().toInt();

    ui->progressBar->setMaximum(massSize);

    ui->textEdit_2->setText(QString::number(massSize));

    mass = new int[massSize];

    srand(time(NULL));

    for(int i=0;i<massSize;i++)
    {
        mass[i] = rand()%1000;
    }

    for(int i=0;i<massSize;i++)
    {
        ui->textBrowser->append(QString::number(mass[i]) + " " + QString::number(mass[(i+1)])+" "); i++;
        ui->progressBar->setValue(i+1);
    }


    return;
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->textBrowser->clear();
    ui->textBrowser_2->clear();
    ui->textEdit->clear();
    ui->textEdit_2->clear();
    ui->fileSize->clear();

    return;
}

void MainWindow::on_pushButton_clicked() //СОРТИРОВКА ФУНКЦИЕЙ SORT()
{
  if(mass)
  {
    QTime time;

    time.start();
    ui->statusBar->showMessage("Выполняется сортировка!");
    sort(&mass[0], &mass[massSize]);
    ui->textEdit->setText(QString::number(time.elapsed()));
    ui->statusBar->clearMessage();

    for(int i=0;i<massSize;i++)
    {
        ui->textBrowser_2->append(QString::number(mass[i]) + " ");
        ui->progressBar->setValue(i+1);
    }
  }

  delete[] mass;

    return;
}

void MainWindow::on_action_3_triggered() //Сортировка Естественным Слиянием(внешняя)
{
    ui->textEdit->clear();

    ui->textEdit_2->setEnabled(false);

    massSize = 0;

    QMessageBox::information(this, "Attention", "Для работы программы создайте директорию: C:/SortEstvSli");

    dirF = QFileDialog::getOpenFileName(this, "Веберете исходный фаил сортировки", "", "*.txt *.dot");
    if(dirF==""){
        QMessageBox::information(this, "Error", "Ошибка открытия файла");
        return;}

   QFile fA(dirF);
   fA.open(QIODevice::ReadWrite);
   if(!(fA.isOpen()))
   {
       QMessageBox::information(this, "Error", "Ошибка программы");
       ui->statusBar->showMessage("System Error");
       return;
   }

   ui->fileSize->append(QString::number(fA.size()));
   if(fA.size() == 0)
   {
       QMessageBox::information(this, "Error", "Выбранный фаил не содержит объектов сортировки!");
       ui->statusBar->showMessage("System Error");
       return;
   }

   QFile fB("C:/SortEstvSli/B.txt");
   fB.open(QIODevice::WriteOnly);
   if(!(fB.isOpen()))
   {
       QMessageBox::information(this, "Error", "Ошибка работы с дирректорией: C:/SortEstvSli");
       ui->statusBar->showMessage("System Error");
       return;
   }
   fB.remove();
   fB.close();
   fB.open(QIODevice::ReadWrite);
   if(!(fB.isOpen()))
   {
       QMessageBox::information(this, "Error", "Ошибка работы с дирректорией: C:/SortEstvSli");
       ui->statusBar->showMessage("System Error");
       return;
   }

   QFile fC("C:/SortEstvSli/C.txt");
   fC.open(QIODevice::WriteOnly);
   if(!(fC.isOpen()))
   {
       QMessageBox::information(this, "Error", "Ошибка работы с дирректорией: C:/SortEstvSli");
       ui->statusBar->showMessage("System Error");
       return;
   }
   fC.remove();
   fC.close();
   fC.open(QIODevice::ReadWrite);
   if(!(fC.isOpen()))
   {
       QMessageBox::information(this, "Error", "Ошибка работы с дирректорией: C:/SortEstvSli");
       ui->statusBar->showMessage("System Error");
       return;
   }

   QTextStream A(&fA);
   QTextStream B(&fB);
   QTextStream C(&fC);

   int buffer, sr;
   int boxB = (-2), boxC = (-2);
   int cik = 0; // Временный счетчик
   bool trig = true;
   bool falseB = false;
   bool falseC = false;

   while(1)
   {
     A >> buffer;
     if(buffer == -1){break;}
     ui->textBrowser->append(QString::number(buffer));
   }

   A.seek(0);

  while(1)
  {
      A >> buffer;
      B << buffer << ' ';

    while(1)
    {
    A >> sr;
    if(sr == (-1)){break;}

        if((!(buffer > sr)) && (trig == true))
        {
            B << sr << ' ';
            buffer = sr;
        }
        else
        {
          if(trig == true){
            buffer = sr;
            C << sr << ' ';
            trig = false;
            continue; }
        }

        if((!(buffer > sr)) && (trig == false))
        {
            C << sr << ' ';
            buffer = sr;
        }
        else
        {
          if(trig == false){
            buffer = sr;
            B << sr << ' ';
            trig = true;
            continue; }
        }      
    }

   B << -1;
   C << -1;

   //**************************************
      B.seek(0);
      ui->testEdit->append("Фаил B: ");
      while(1)
      {
        B >> buffer;
        if(buffer == -1){break;}
        ui->testEdit->append(QString::number(buffer));
      }
      B.seek(0);

      C.seek(0);
      ui->testEdit->append("Фаил C: ");
      while(1)
      {
        C >> buffer;
        if(buffer == -1){break;}
        ui->testEdit->append(QString::number(buffer));
      }
      ui->testEdit->append("**********************");
      C.seek(0);
   //**************************************

   fA.close();
   CleanAndCreateFile(dirF);
   fA.open(QIODevice::ReadWrite);
   if(!(fA.isOpen()))
   {
       QMessageBox::information(this, "Error", "Ошибка программы 1");
       ui->statusBar->showMessage("System Error");
       return;
   }
   B.seek(0);
   C.seek(0);

  trig = true;
  B >> buffer;

  while(1)
  {
    if((trig == true) && (falseB == false))
    {
        if(boxB != (-2))
        {
            buffer = boxB;
            boxB = (-2);
        }

        if(buffer == (-2))
        {
            B >> buffer;
        }
        B >> sr;

        if(sr == (-1))
        {
            falseB = true;
            trig = false;
            A << buffer << ' ';
            buffer = (-2);
            continue;
        }

        if(falseB == true)
        {
          A << buffer << ' ';
          A << sr << ' ';
           while(sr != (-1))
           {
               B >> sr;
               A << sr << ' ';
           }
           falseC = true;
           break;
        }

        if(buffer <= sr)
        {
          A << buffer << ' ';
          buffer = sr;
          continue;
        }
        else{
          A << buffer << ' ';
          boxB = sr;
          buffer = (-2);
          trig = false;
          continue;
        }
    }

    if((trig == false) && (falseC == false))
    {
        if(boxC != (-2))
        {
            buffer = boxC;
            boxC = (-2);
        }

        if(buffer == (-2))
        {
            C >> buffer;
        }
        C >> sr;

        if(sr == (-1))
        {
            falseC = true;
            trig = true;
            A << buffer << ' ';
            buffer = (-2);
            continue;
        }

        if(falseB == true)
        {
          A << buffer << ' ';
          A << sr << ' ';
           while(sr != (-1))
           {
               C >> sr;
               A << sr << ' ';
           }
           falseC = true;
           break;
        }

        if(buffer <= sr)
        {
          A << buffer << ' ';
          buffer = sr;
          continue;
        }
        else{
          A << buffer <<' ';
          boxC = sr;
          buffer = (-2);
          trig = true;
          continue;
        }
    }

    if(falseC == true && falseB == true)
    {
        break;
    }
  }

   A << -1;

   A.seek(0);
   fB.close();
   fC.close();
   CleanAndCreateFile("C:/SortEstvSli/B.txt");
   CleanAndCreateFile("C:/SortEstvSli/C.txt");
   fB.open(QIODevice::ReadWrite);
   if(!(fB.isOpen()))
   {
       QMessageBox::information(this, "Error", "Ошибка программы");
       ui->statusBar->showMessage("System Error");
       return;
   }
   fC.open(QIODevice::ReadWrite);
   if(!(fC.isOpen()))
   {
       QMessageBox::information(this, "Error", "Ошибка программы");
       ui->statusBar->showMessage("System Error");
       return;
   }

   trig = true;

   //**************************************
      A.seek(0);
      while(1)
      {
        A >> buffer;
        if(buffer == -1){break;}
        ui->textBrowser_2->append(QString::number(buffer));
      }
      ui->textBrowser_2->append("**********************");
      A.seek(0);
   //**************************************

      cik = cik + 1; //Временно
      qDebug() << "цикл №" << cik;
      if(cik == 2){break;}
}

/*
   A.seek(0);

   while(1)
   {
     A >> buffer;
     if(buffer == -1){break;}
     ui->textBrowser_2->append(QString::number(buffer));
   }
*/


//   B.reset(); Временно отключен
   fB.remove();

//   C.reset(); Временно отключен
   fC.remove();

   fA.close();
   fB.close();
   fC.close();

   ui->textEdit_2->setEnabled(true);   
}



void MainWindow::on_action_triggered()
{
    QString alf;

    for(int i=65, j=0;i<=90;i++, j++)
    {
        alf[j] = i;

    }

    ui->textBrowser->append(alf);

  QString dir = QFileDialog::getOpenFileName(this, "Веберете исходный фаил сортировки", "", "*.txt *.dot");
    if(dir==""){
        QMessageBox::information(this, "Error", "Ошибка открытия файла");
        return;}

   QFile OD(dir);
   OD.open(QIODevice::ReadWrite);
   if(!(OD.isOpen()))
   {
       QMessageBox::information(this, "Error", "Невозможно открыть фаил");
       ui->statusBar->showMessage("System Error");
       return;
   }

   ui->fileSize->append(QString::number(OD.size()));
   if(OD.size() == 0)
   {
       QMessageBox::information(this, "Error", "Выбранный фаил не содержит объектов сортировки!");
       ui->statusBar->showMessage("System Error");
       return;
   }

   massSize = OD.size();

  QTextStream StreamGraf(&OD);

  QString oldGraf = StreamGraf.readAll();

  OD.close();

  QString graf;

  for(int i=0;massSize > 0;i++, massSize--)
  {
     for(int j=0;j<25;j++)
     {
         if((oldGraf[i] == '_') || (oldGraf[i] == alf[j]))
         {
             graf[i] = oldGraf[i];
             break;
         }
     }
     i += 1;
     graf[i] == ' ';
  }

  ui->progressBar->setMaximum(graf.size());

//  ui->textBrowser->append(graf);

/*
ui->textEdit->clear();

QTime tim;

massSize = ui->textEdit_2->toPlainText().toInt();
int mS = massSize;
ui->textEdit_2->setEnabled(false);
ui->progressBar->setMaximum(massSize);


srand(time(NULL));

for(int i=0;i<massSize;i++)
{
    mass[i] = rand()%1000;
}

for(int i=0;i<massSize;i++)
{
    ui->textBrowser->append(QString::number(mass[i]) + " ");
    ui->progressBar->setValue(i+1);
}

int buffer = 0;

tim.start();
ui->statusBar->showMessage("Выполняется сортировка!");

while(massSize>0)
{
if(massSize != mS)
{
    buffer = mass[0];
    mass[0] = mass[massSize];
    mass[massSize] = buffer;
    massSize--;
}

if(massSize<=0){break;}

for(int j=0;j<mS;j++)
{
for(int i=(massSize/2);i>=0;i--)
{
    if((!(mass[i] > mass[(2*i)])) && ((2*i) <= massSize))
    {
       buffer = mass[i];
       mass[i] = mass[(2*i)];
       mass[(2*i)] = buffer;
    }

    if((!(mass[i] > mass[((2*i) +1)])) && (((2*i) +1) <= massSize))
    {
       buffer = mass[i];
       mass[i] = mass[((2*i) +1)];
       mass[((2*i) +1)] = buffer;
    }
}
}
if(massSize == mS)
{
    massSize = massSize -1;
}
}

ui->textEdit->setText(QString::number(tim.elapsed()));
ui->statusBar->clearMessage();

massSize = mS;

for(int i=0;i<massSize;i++)
{
    ui->textBrowser_2->append(QString::number(mass[i]) + " ");
    ui->progressBar->setValue(i+1);
}

delete[] mass;

ui->textEdit_2->setEnabled(true);
*/
}
