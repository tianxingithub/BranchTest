#pragma once

#include <QWidget>
#include "ui_ETOProjectCreator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ETOProjectCreatorClass; };
QT_END_NAMESPACE

class ETOProjectCreator : public QWidget
{
	Q_OBJECT

public:
	ETOProjectCreator(QWidget *parent = nullptr);
	~ETOProjectCreator();

private:
	Ui::ETOProjectCreatorClass *ui;
};
