/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QAction *action_sort;
    QAction *action_3;
    QAction *action;
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QTextBrowser *textBrowser_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QProgressBar *progressBar;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QTextEdit *fileSize;
    QLabel *label_6;
    QTextBrowser *testEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(739, 659);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_sort = new QAction(MainWindow);
        action_sort->setObjectName(QStringLiteral("action_sort"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 381, 221));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(400, 100, 221, 31));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(400, 160, 221, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(480, 200, 131, 21));
        textBrowser_2 = new QTextBrowser(centralWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 270, 241, 301));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 250, 141, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 70, 221, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(400, 130, 341, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 0, 271, 16));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 580, 721, 23));
        progressBar->setValue(0);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 200, 75, 23));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(400, 220, 211, 16));
        fileSize = new QTextEdit(centralWidget);
        fileSize->setObjectName(QStringLiteral("fileSize"));
        fileSize->setGeometry(QRect(400, 39, 221, 31));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(400, 20, 231, 21));
        testEdit = new QTextBrowser(centralWidget);
        testEdit->setObjectName(QStringLiteral("testEdit"));
        testEdit->setGeometry(QRect(270, 270, 256, 301));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 739, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_2);
        menu->addAction(action_sort);
        menu->addAction(action_3);
        menu->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_2->setText(QApplication::translate("MainWindow", "\320\221\320\270\320\275\320\260\321\200\320\275\320\260\321\217 \320\237\320\270\321\200\320\260\320\274\320\270\320\264\320\260\320\273\321\214\320\275\320\260\321\217 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260(\320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\321\217\321\217)", 0));
        action_sort->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \321\204\321\203\320\275\320\272\321\206\320\270\320\265\320\271 sort()", 0));
        action_3->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \320\225\321\201\321\202\320\265\321\201\321\202\320\262\320\265\320\275\320\275\321\213\320\274 \320\241\320\273\320\270\321\217\320\275\320\270\320\265\320\274(\320\262\320\275\320\265\321\210\320\275\321\217\321\217)", 0));
        action->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \320\263\321\200\320\260\321\204\320\260 \320\277\320\270\321\200\320\260\320\274\320\270\320\264\320\260\320\273\321\214\320\275\320\276\320\271 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\276\320\271", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 sort", 0));
        label->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \320\274\320\260\321\201\321\201\320\270\320\262:", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270:", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\224\320\273\321\217 \320\275\320\260\321\207\320\260\320\273\320\260 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \320\274\320\260\321\201\321\201\320\270\320\262\320\260(\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\321\217\321\217):", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\271 \320\274\320\260\321\201\321\201\320\270\320\262:", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\202\320\276\320\274 \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \320\272\320\275\320\276\320\277\320\272\321\203 \"\320\234\320\265\320\275\321\216\"", 0));
        label_6->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\201\320\276\321\200\321\202\320\270\321\200\321\203\320\265\320\274\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260:", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
