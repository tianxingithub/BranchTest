/********************************************************************************
** Form generated from reading UI file 'FaceInter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEINTER_H
#define UI_FACEINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceInterClass
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *banner_2;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QLabel *enter_label_2;
    QSpacerItem *horizontalSpacer_10;
    QWidget *banner2image;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FaceInterClass)
    {
        if (FaceInterClass->objectName().isEmpty())
            FaceInterClass->setObjectName(QString::fromUtf8("FaceInterClass"));
        FaceInterClass->resize(561, 275);
        verticalLayout = new QVBoxLayout(FaceInterClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        banner_2 = new QWidget(FaceInterClass);
        banner_2->setObjectName(QString::fromUtf8("banner_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(banner_2->sizePolicy().hasHeightForWidth());
        banner_2->setSizePolicy(sizePolicy);
        banner_2->setMinimumSize(QSize(418, 78));
        banner_2->setMaximumSize(QSize(418, 78));
        banner_2->setStyleSheet(QString::fromUtf8("QWidget#banner_2{\n"
"border: 0px;\n"
"background-color: #FFFFFF;\n"
"border-radius: 6px;\n"
"padding: 0px;\n"
"}"));
        verticalLayout_11 = new QVBoxLayout(banner_2);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_6 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(16, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_6 = new QLabel(banner_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(162, 15));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\200\235\346\272\220\351\273\221\344\275\223 CN Medium"));
        font.setPointSize(11);
        label_6->setFont(font);

        verticalLayout_9->addWidget(label_6);

        enter_label_2 = new QLabel(banner_2);
        enter_label_2->setObjectName(QString::fromUtf8("enter_label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\200\235\346\272\220\351\273\221\344\275\223 CN Normal"));
        font1.setPointSize(13);
        enter_label_2->setFont(font1);
        enter_label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: #999999;\n"
"}\n"
"QLabel::hover {\n"
"color: #1E89FF;\n"
"}"));

        verticalLayout_9->addWidget(enter_label_2);


        horizontalLayout_8->addLayout(verticalLayout_9);

        horizontalSpacer_10 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        banner2image = new QWidget(banner_2);
        banner2image->setObjectName(QString::fromUtf8("banner2image"));
        banner2image->setMinimumSize(QSize(182, 78));
        banner2image->setMaximumSize(QSize(182, 78));
        banner2image->setStyleSheet(QString::fromUtf8("QWidget#banner2image{\n"
"border: 0px;\n"
"background-image: url(:/startpage/images/Banner2.png);\n"
"}"));

        horizontalLayout_8->addWidget(banner2image);


        verticalLayout_11->addLayout(horizontalLayout_8);

        verticalSpacer_7 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_7);


        verticalLayout->addWidget(banner_2);

        verticalSpacer = new QSpacerItem(20, 170, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(FaceInterClass);

        QMetaObject::connectSlotsByName(FaceInterClass);
    } // setupUi

    void retranslateUi(QWidget *FaceInterClass)
    {
        FaceInterClass->setWindowTitle(QApplication::translate("FaceInterClass", "FaceInter", nullptr));
        label_6->setText(QApplication::translate("FaceInterClass", "\351\243\236\350\241\214\346\200\247\350\203\275\350\256\241\347\256\227", nullptr));
        enter_label_2->setText(QApplication::translate("FaceInterClass", "\350\277\233\345\205\245 >", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FaceInterClass: public Ui_FaceInterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEINTER_H
