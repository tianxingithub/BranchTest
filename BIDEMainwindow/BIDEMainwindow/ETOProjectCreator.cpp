#include "ETOProjectCreator.h"

ETOProjectCreator::ETOProjectCreator(QWidget *parent)
	: QWidget(parent)
	, ui(new Ui::ETOProjectCreatorClass())
{
	ui->setupUi(this);
}

ETOProjectCreator::~ETOProjectCreator()
{
	delete ui;
}
