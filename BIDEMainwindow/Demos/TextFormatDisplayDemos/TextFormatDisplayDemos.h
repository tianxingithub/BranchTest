#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TextFormatDisplayDemos.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TextFormatDisplayDemosClass; };
QT_END_NAMESPACE

class TextFormatDisplayDemos : public QMainWindow
{
    Q_OBJECT

public:
    TextFormatDisplayDemos(QWidget *parent = nullptr);
    ~TextFormatDisplayDemos();

private:
    Ui::TextFormatDisplayDemosClass *ui;
};
