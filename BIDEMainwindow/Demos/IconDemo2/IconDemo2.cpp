#include "IconDemo2.h"

IconDemo2::IconDemo2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IconDemo2Class())
{
    ui->setupUi(this);
}

IconDemo2::~IconDemo2()
{
    delete ui;
}
