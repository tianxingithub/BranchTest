#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_IconDemo2.h"

QT_BEGIN_NAMESPACE
namespace Ui { class IconDemo2Class; };
QT_END_NAMESPACE

class IconDemo2 : public QMainWindow
{
    Q_OBJECT

public:
    IconDemo2(QWidget *parent = nullptr);
    ~IconDemo2();

private:
    Ui::IconDemo2Class *ui;
};
