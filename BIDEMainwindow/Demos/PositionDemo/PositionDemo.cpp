#include "PositionDemo.h"

PositionDemo::PositionDemo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PositionDemoClass())
{
    ui->setupUi(this);
    ui->splitter->setStretchFactor(0, 20);//�趨��ര�ڣ���0�Ŵ��ڴ�Сռ20%
    ui->splitter->setStretchFactor(1, 80);//�趨��ര�ڣ���0�Ŵ��ڴ�Сռ20%

	ui->splitter_2->setStretchFactor(0, 75);//�趨��ര�ڣ���0�Ŵ��ڴ�Сռ20%
	ui->splitter_2->setStretchFactor(1, 25);//�趨��ര�ڣ���0�Ŵ��ڴ�Сռ20%

    
}

PositionDemo::~PositionDemo()
{
    delete ui;
}
