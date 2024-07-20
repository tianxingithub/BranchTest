#include "BIDEMainwindow.h"

#include "bt/BTGui/BTRibbonCategory.h"
#include "bt/BTGui/BTRibbonPannel.h"
#include "bt/BTGui/BTTemplateAction.h"
#include "BT/BTGui/BTAbstractMainWindow.h"
#include "saribbonbar/saribbonbar.h"
#include "BT/BTGui/BTStartPageWidget.h"

#include "FaceInter.h"

#include <QDialog>

BIDEMainwindow::BIDEMainwindow(QWidget *parent)
	: BT::BTMainWindow(parent)
{
	showStartPage(true);
	auto importdbAction = addRibbonCategory(QStringLiteral("开始"))->addRibbonPannel(QStringLiteral("数据库插件"))->
		addTemplateAction(QStringLiteral("导入数据库"), "", u8"云数据库.png");
	connect(importdbAction, &QAction::triggered, this, [=]() 
		{
			QDialog* d = new QDialog();
			d->show(); 
		}
	);
// 	auto bar = BT::BTMainWindow::ribbonBar();
	ribbonBar()->moveCategory(3, 2);
// 	addRibbonCategory(QStringLiteral("开始"))->movePannel(0, 2);
	// 移除菜单栏
// 	addRibbonCategory(QStringLiteral("开始"))->removeRibbonPannelByName(u8"管理");

	BT::BTStartPageWidget* page = getStartPage();
	page->setSoftwareChineseName(u8"软件名称-中文");
	page->setSoftwareEnglishName(u8"Software Name - Eng");
	page->setUserName(u8"客户信息中文说明");
	page->setSoftwareVersion(u8"V0.1");
// 	page->setBackgroundImage("./images/bgp.jpg");
	page->setClientLogoImage("./images/warning32.png");
// 	page->setSoftwareLogoImage("./images/warning32.png");



	FaceInter* face = new FaceInter();
// 	face->show();

	page->setWidget(face);

	
// 把face放入到模板内容中
	connect(face, &FaceInter::enterLabelClicked, this, &BIDEMainwindow::enterLabelClickedSlot);

}

BIDEMainwindow::~BIDEMainwindow()
{
    
}

void BIDEMainwindow::enterLabelClickedSlot()
{
	
	showStartPage(false);
}


void BIDEMainwindow::openSlot()
{
// 	open()
}

void BIDEMainwindow::saveSlot()
{

	return;
}

void BIDEMainwindow::saveasSlot()
{

	return;
}

void BIDEMainwindow::newSlot()
{

}

