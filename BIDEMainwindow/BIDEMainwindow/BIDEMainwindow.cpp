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
	auto importdbAction = addRibbonCategory(QStringLiteral("��ʼ"))->addRibbonPannel(QStringLiteral("���ݿ���"))->
		addTemplateAction(QStringLiteral("�������ݿ�"), "", u8"�����ݿ�.png");
	connect(importdbAction, &QAction::triggered, this, [=]() 
		{
			QDialog* d = new QDialog();
			d->show(); 
		}
	);
// 	auto bar = BT::BTMainWindow::ribbonBar();
	ribbonBar()->moveCategory(3, 2);
// 	addRibbonCategory(QStringLiteral("��ʼ"))->movePannel(0, 2);
	// �Ƴ��˵���
// 	addRibbonCategory(QStringLiteral("��ʼ"))->removeRibbonPannelByName(u8"����");

	BT::BTStartPageWidget* page = getStartPage();
	page->setSoftwareChineseName(u8"�������-����");
	page->setSoftwareEnglishName(u8"Software Name - Eng");
	page->setUserName(u8"�ͻ���Ϣ����˵��");
	page->setSoftwareVersion(u8"V0.1");
// 	page->setBackgroundImage("./images/bgp.jpg");
	page->setClientLogoImage("./images/warning32.png");
// 	page->setSoftwareLogoImage("./images/warning32.png");



	FaceInter* face = new FaceInter();
// 	face->show();

	page->setWidget(face);

	
// ��face���뵽ģ��������
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

