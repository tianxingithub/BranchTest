#include "PositionDemo.h"

PositionDemo::PositionDemo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PositionDemoClass())
{
    ui->setupUi(this);
    ui->splitter->setStretchFactor(0, 20);//设定左侧窗口，即0号窗口大小占20%
    ui->splitter->setStretchFactor(1, 80);//设定左侧窗口，即0号窗口大小占20%

	ui->splitter_2->setStretchFactor(0, 75);//设定左侧窗口，即0号窗口大小占20%
	ui->splitter_2->setStretchFactor(1, 25);//设定左侧窗口，即0号窗口大小占20%

    
}

PositionDemo::~PositionDemo()
{
    delete ui;
}
