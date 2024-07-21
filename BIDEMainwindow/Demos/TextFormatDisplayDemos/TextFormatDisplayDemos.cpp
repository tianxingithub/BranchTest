#include "TextFormatDisplayDemos.h"

int countChineseCharacters(const QString& str) {
	int chineseCharCount = 0;

	for (const QChar& ch : str) {
		// �ж��Ƿ��������ַ�
		if (ch.unicode() >= 0x4E00 && ch.unicode() <= 0x9FFF) {
			++chineseCharCount;
		}
	}

	return chineseCharCount;
}

TextFormatDisplayDemos::TextFormatDisplayDemos(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TextFormatDisplayDemosClass())
{
    ui->setupUi(this);

	QString text = QString("%1%2%3%4%5")
		.arg("segment", -20)               // ����룬ռλ20�ַ�
		.arg("hp",   -16)                   // ����룬ռλ12�ַ�
		.arg("dte",  -16)                  // ����룬ռλ12�ַ�
		.arg("mach", -16)                 // ����룬ռλ12�ַ�
		.arg("wto",  -16);                 // ����룬ռλ12�ַ�

	QString textWithChinese = QString("%1%2%3%4%5")
		.arg(u8"Ƭ��_1", -20+2)                  // ����룬ռλ20�ַ�
		.arg(u8"��ѹ�߶�_123", -16+4)                 // ����룬ռλ12�ַ�
		.arg(u8"�����¶�ƫ��", -16+6)                 // ����룬ռλ12�ַ�
		.arg(u8"�������С_1", -16+5)                 // ����룬ռλ12�ַ�
		.arg(u8"����ֵ_1",     -16+3);                // ����룬ռλ12�ַ�

	ui->textBrowser->append(text);
	ui->textBrowser->append(textWithChinese);
}

TextFormatDisplayDemos::~TextFormatDisplayDemos()
{
    delete ui;
}
