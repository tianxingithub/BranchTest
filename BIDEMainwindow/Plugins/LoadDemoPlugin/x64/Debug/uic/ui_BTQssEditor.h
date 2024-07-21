/********************************************************************************
** Form generated from reading UI file 'BTQssEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BTQSSEDITOR_H
#define UI_BTQSSEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BTQSSWidget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QRadioButton *radioButton_3;
    QCheckBox *checkBox_4;
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QCheckBox *checkBox_3;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_2;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *BTQSSWidget)
    {
        if (BTQSSWidget->objectName().isEmpty())
            BTQSSWidget->setObjectName(QString::fromUtf8("BTQSSWidget"));
        BTQSSWidget->resize(790, 543);
        gridLayout_2 = new QGridLayout(BTQSSWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_3 = new QGroupBox(BTQSSWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 3, 1, 1);

        radioButton_2 = new QRadioButton(groupBox_3);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout->addWidget(radioButton_3, 1, 1, 1, 1);

        checkBox_4 = new QCheckBox(groupBox_3);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        gridLayout->addWidget(checkBox_4, 3, 0, 1, 1);

        radioButton = new QRadioButton(groupBox_3);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout->addWidget(radioButton, 0, 1, 1, 1);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);

        checkBox_3 = new QCheckBox(groupBox_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout->addWidget(checkBox_3, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 0, 3, 1, 1);

        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(false);
        checkBox->setTristate(true);

        gridLayout->addWidget(checkBox, 2, 0, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 1, 0, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(false);

        gridLayout->addWidget(lineEdit_3, 2, 3, 1, 1);

        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setEnabled(false);

        gridLayout->addWidget(comboBox_2, 1, 4, 1, 1);

        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);

        gridLayout->addWidget(pushButton_2, 2, 4, 1, 1);

        comboBox = new QComboBox(groupBox_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 4, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        gridLayout_2->addWidget(groupBox_3, 0, 0, 2, 1);

        groupBox_2 = new QGroupBox(BTQSSWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableWidget = new QTableWidget(groupBox_2);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(BTQSSWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(groupBox);
        new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);


        gridLayout_2->addWidget(groupBox, 1, 1, 1, 1);


        retranslateUi(BTQSSWidget);

        QMetaObject::connectSlotsByName(BTQSSWidget);
    } // setupUi

    void retranslateUi(QWidget *BTQSSWidget)
    {
        BTQSSWidget->setWindowTitle(QApplication::translate("BTQSSWidget", "Form", nullptr));
        groupBox_3->setTitle(QApplication::translate("BTQSSWidget", "GroupBox", nullptr));
        radioButton_2->setText(QApplication::translate("BTQSSWidget", "RadioButton", nullptr));
        pushButton_4->setText(QApplication::translate("BTQSSWidget", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("BTQSSWidget", "PushButton", nullptr));
        radioButton_3->setText(QApplication::translate("BTQSSWidget", "RadioButton", nullptr));
        checkBox_4->setText(QApplication::translate("BTQSSWidget", "CheckBox", nullptr));
        radioButton->setText(QApplication::translate("BTQSSWidget", "RadioButton", nullptr));
        pushButton->setText(QApplication::translate("BTQSSWidget", "PushButton", nullptr));
        checkBox_3->setText(QApplication::translate("BTQSSWidget", "CheckBox", nullptr));
        checkBox->setText(QApplication::translate("BTQSSWidget", "CheckBox", nullptr));
        checkBox_2->setText(QApplication::translate("BTQSSWidget", "CheckBox", nullptr));
        lineEdit_3->setText(QApplication::translate("BTQSSWidget", "\344\270\215\345\217\257\347\274\226\350\276\221", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));

        pushButton_2->setText(QApplication::translate("BTQSSWidget", "\344\270\215\345\217\257\347\224\250", nullptr));
        comboBox->setItemText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        comboBox->setItemText(1, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        comboBox->setItemText(2, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        comboBox->setItemText(3, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));

        groupBox_2->setTitle(QApplication::translate("BTQSSWidget", "table", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\350\241\214", nullptr));
        groupBox->setTitle(QApplication::translate("BTQSSWidget", "treee", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\345\210\227", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\345\255\220\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem2->child(2);
        ___qtreewidgetitem5->setText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem2->child(3);
        ___qtreewidgetitem6->setText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem7->setText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\345\255\220\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem7->child(1);
        ___qtreewidgetitem9->setText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem9->child(0);
        ___qtreewidgetitem10->setText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\345\255\220\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem7->child(2);
        ___qtreewidgetitem11->setText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem7->child(3);
        ___qtreewidgetitem12->setText(0, QApplication::translate("BTQSSWidget", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class BTQSSWidget: public Ui_BTQSSWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BTQSSEDITOR_H
