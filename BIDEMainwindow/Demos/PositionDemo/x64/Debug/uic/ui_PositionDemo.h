/********************************************************************************
** Form generated from reading UI file 'PositionDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSITIONDEMO_H
#define UI_POSITIONDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PositionDemoClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *widget;
    QGridLayout *gridLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QLabel *label_2;
    QGraphicsView *graphicsView;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PositionDemoClass)
    {
        if (PositionDemoClass->objectName().isEmpty())
            PositionDemoClass->setObjectName(QString::fromUtf8("PositionDemoClass"));
        PositionDemoClass->resize(680, 434);
        centralWidget = new QWidget(PositionDemoClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout->addWidget(radioButton, 0, 1, 1, 1);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 1, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        splitter->addWidget(widget);
        graphicsView = new QGraphicsView(splitter);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        splitter->addWidget(graphicsView);
        splitter_2->addWidget(splitter);
        tableWidget = new QTableWidget(splitter_2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        splitter_2->addWidget(tableWidget);

        verticalLayout->addWidget(splitter_2);

        PositionDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PositionDemoClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 680, 23));
        PositionDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PositionDemoClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PositionDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PositionDemoClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PositionDemoClass->setStatusBar(statusBar);

        retranslateUi(PositionDemoClass);

        QMetaObject::connectSlotsByName(PositionDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *PositionDemoClass)
    {
        PositionDemoClass->setWindowTitle(QApplication::translate("PositionDemoClass", "PositionDemo", nullptr));
        radioButton->setText(QApplication::translate("PositionDemoClass", "RadioButton", nullptr));
        radioButton_2->setText(QApplication::translate("PositionDemoClass", "RadioButton", nullptr));
        label->setText(QApplication::translate("PositionDemoClass", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("PositionDemoClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PositionDemoClass: public Ui_PositionDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSITIONDEMO_H
