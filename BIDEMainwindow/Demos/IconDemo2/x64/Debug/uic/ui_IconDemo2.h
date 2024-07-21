/********************************************************************************
** Form generated from reading UI file 'IconDemo2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICONDEMO2_H
#define UI_ICONDEMO2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IconDemo2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *IconDemo2Class)
    {
        if (IconDemo2Class->objectName().isEmpty())
            IconDemo2Class->setObjectName(QString::fromUtf8("IconDemo2Class"));
        IconDemo2Class->resize(600, 400);
        menuBar = new QMenuBar(IconDemo2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        IconDemo2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(IconDemo2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        IconDemo2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(IconDemo2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        IconDemo2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(IconDemo2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        IconDemo2Class->setStatusBar(statusBar);

        retranslateUi(IconDemo2Class);

        QMetaObject::connectSlotsByName(IconDemo2Class);
    } // setupUi

    void retranslateUi(QMainWindow *IconDemo2Class)
    {
        IconDemo2Class->setWindowTitle(QApplication::translate("IconDemo2Class", "IconDemo2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IconDemo2Class: public Ui_IconDemo2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICONDEMO2_H
