/********************************************************************************
** Form generated from reading UI file 'MongoEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONGOEDITOR_H
#define UI_MONGOEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MongoEditorClass
{
public:
    QPushButton *btnInsert;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnDelete;

    void setupUi(QDialog *MongoEditorClass)
    {
        if (MongoEditorClass->objectName().isEmpty())
            MongoEditorClass->setObjectName(QString::fromUtf8("MongoEditorClass"));
        MongoEditorClass->resize(810, 475);
        btnInsert = new QPushButton(MongoEditorClass);
        btnInsert->setObjectName(QString::fromUtf8("btnInsert"));
        btnInsert->setGeometry(QRect(150, 160, 211, 71));
        label = new QLabel(MongoEditorClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 90, 151, 41));
        label_2 = new QLabel(MongoEditorClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 90, 91, 31));
        btnDelete = new QPushButton(MongoEditorClass);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setGeometry(QRect(430, 160, 221, 81));

        retranslateUi(MongoEditorClass);

        QMetaObject::connectSlotsByName(MongoEditorClass);
    } // setupUi

    void retranslateUi(QDialog *MongoEditorClass)
    {
        MongoEditorClass->setWindowTitle(QApplication::translate("MongoEditorClass", "MongoEditor", nullptr));
        btnInsert->setText(QApplication::translate("MongoEditorClass", "MongoTwo", nullptr));
        label->setText(QApplication::translate("MongoEditorClass", "QxOrmData", nullptr));
        label_2->setText(QApplication::translate("MongoEditorClass", "DemoQxOrm", nullptr));
        btnDelete->setText(QApplication::translate("MongoEditorClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MongoEditorClass: public Ui_MongoEditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONGOEDITOR_H
