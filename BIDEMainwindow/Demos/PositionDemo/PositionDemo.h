#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PositionDemo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class PositionDemoClass; };
QT_END_NAMESPACE

class PositionDemo : public QMainWindow
{
    Q_OBJECT

public:
    PositionDemo(QWidget *parent = nullptr);
    ~PositionDemo();

private:
    Ui::PositionDemoClass *ui;
};
