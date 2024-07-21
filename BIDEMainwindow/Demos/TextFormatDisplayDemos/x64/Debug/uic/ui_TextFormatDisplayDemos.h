/********************************************************************************
** Form generated from reading UI file 'TextFormatDisplayDemos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFORMATDISPLAYDEMOS_H
#define UI_TEXTFORMATDISPLAYDEMOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextFormatDisplayDemosClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *TextFormatDisplayDemosClass)
    {
        if (TextFormatDisplayDemosClass->objectName().isEmpty())
            TextFormatDisplayDemosClass->setObjectName(QString::fromUtf8("TextFormatDisplayDemosClass"));
        TextFormatDisplayDemosClass->resize(668, 506);
        centralWidget = new QWidget(TextFormatDisplayDemosClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(9);
        textBrowser->setFont(font);

        verticalLayout->addWidget(textBrowser);

        TextFormatDisplayDemosClass->setCentralWidget(centralWidget);

        retranslateUi(TextFormatDisplayDemosClass);

        QMetaObject::connectSlotsByName(TextFormatDisplayDemosClass);
    } // setupUi

    void retranslateUi(QMainWindow *TextFormatDisplayDemosClass)
    {
        TextFormatDisplayDemosClass->setWindowTitle(QApplication::translate("TextFormatDisplayDemosClass", "TextFormatDisplayDemos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextFormatDisplayDemosClass: public Ui_TextFormatDisplayDemosClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFORMATDISPLAYDEMOS_H
