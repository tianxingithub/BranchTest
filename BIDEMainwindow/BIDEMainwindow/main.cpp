#include "BIDEMainwindow.h"

#include <QtWidgets/QApplication>
#include <QFile>
#include <QTextStream>
#include <QTextCodec>

#include"BT/BTModule/Utility/LoadstringFile.h"
// #include"BT/BTModule/utility/SaveStringFile.h'

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	BIDEMainwindow w;

	
	// �����ĸ�ͼ��
	QString style = "\
	QToolButton#BT_NEW_BUTTON    {qproperty-icon: url(./images/new.png);}\
	QToolButton#BT_OPEN_BUTTON   { qproperty-icon: url(./images/open.png); }\
	QToolButton#BT_SAVE_BUTTON   { qproperty-icon: url(./images/save.png); }\
	QToolButton#BT_SAVEAS_BUTTON { qproperty-icon: url(./images/saveas.png); }\
	";
	// BT--BTStartPageWidget QLabel#software_chinese_name{ color: black;	font: bold 130px; } ���ڿ��ã�����������

	a.setStyleSheet(style);


// 	auto bt_light_style = BT::loadStringFile(":/bt/lightstyle.css");		
// 	auto bt_light_style = BT::loadStringFile("BT--BTStartPageWidget QLabel#software_chinese_name {	color: black;	font: bold 130px ;}");		
// 	a.setStyleSheet(bt_light_style);


	w.show();
	return a.exec();
}
