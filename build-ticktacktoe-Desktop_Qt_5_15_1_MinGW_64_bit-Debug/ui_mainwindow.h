/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_5;
    QSplitter *splitter_4;
    QSplitter *splitter;
    QPushButton *btn11;
    QPushButton *btn12;
    QPushButton *btn13;
    QSplitter *splitter_2;
    QPushButton *btn21;
    QPushButton *btn22;
    QPushButton *btn23;
    QSplitter *splitter_3;
    QPushButton *btn31;
    QPushButton *btn32;
    QPushButton *btn33;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1103, 903);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter_5 = new QSplitter(centralwidget);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Vertical);
        splitter_4 = new QSplitter(splitter_5);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_4);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        btn11 = new QPushButton(splitter);
        btn11->setObjectName(QString::fromUtf8("btn11"));
        QFont font;
        font.setPointSize(100);
        btn11->setFont(font);
        splitter->addWidget(btn11);
        btn12 = new QPushButton(splitter);
        btn12->setObjectName(QString::fromUtf8("btn12"));
        btn12->setFont(font);
        splitter->addWidget(btn12);
        btn13 = new QPushButton(splitter);
        btn13->setObjectName(QString::fromUtf8("btn13"));
        btn13->setFont(font);
        splitter->addWidget(btn13);
        splitter_4->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_4);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        btn21 = new QPushButton(splitter_2);
        btn21->setObjectName(QString::fromUtf8("btn21"));
        btn21->setFont(font);
        splitter_2->addWidget(btn21);
        btn22 = new QPushButton(splitter_2);
        btn22->setObjectName(QString::fromUtf8("btn22"));
        btn22->setFont(font);
        splitter_2->addWidget(btn22);
        btn23 = new QPushButton(splitter_2);
        btn23->setObjectName(QString::fromUtf8("btn23"));
        btn23->setFont(font);
        splitter_2->addWidget(btn23);
        splitter_4->addWidget(splitter_2);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        btn31 = new QPushButton(splitter_3);
        btn31->setObjectName(QString::fromUtf8("btn31"));
        btn31->setFont(font);
        splitter_3->addWidget(btn31);
        btn32 = new QPushButton(splitter_3);
        btn32->setObjectName(QString::fromUtf8("btn32"));
        btn32->setFont(font);
        splitter_3->addWidget(btn32);
        btn33 = new QPushButton(splitter_3);
        btn33->setObjectName(QString::fromUtf8("btn33"));
        btn33->setFont(font);
        splitter_3->addWidget(btn33);
        splitter_4->addWidget(splitter_3);
        splitter_5->addWidget(splitter_4);
        pushButton = new QPushButton(splitter_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setPointSize(30);
        pushButton->setFont(font1);
        splitter_5->addWidget(pushButton);

        verticalLayout->addWidget(splitter_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1103, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn11->setText(QString());
        btn12->setText(QString());
        btn13->setText(QString());
        btn21->setText(QString());
        btn22->setText(QString());
        btn23->setText(QString());
        btn31->setText(QString());
        btn32->setText(QString());
        btn33->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
