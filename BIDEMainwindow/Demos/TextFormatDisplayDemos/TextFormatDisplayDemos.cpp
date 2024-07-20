#include "TextFormatDisplayDemos.h"

int countChineseCharacters(const QString& str) {
	int chineseCharCount = 0;

	for (const QChar& ch : str) {
		// 判断是否是中文字符
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
		.arg("segment", -20)               // 左对齐，占位20字符
		.arg("hp",   -16)                   // 左对齐，占位12字符
		.arg("dte",  -16)                  // 左对齐，占位12字符
		.arg("mach", -16)                 // 左对齐，占位12字符
		.arg("wto",  -16);                 // 左对齐，占位12字符

	QString textWithChinese = QString("%1%2%3%4%5")
		.arg(u8"片段_1", -20+2)                  // 左对齐，占位20字符
		.arg(u8"气压高度_123", -16+4)                 // 左对齐，占位12字符
		.arg(u8"环境温度偏差", -16+6)                 // 左对齐，占位12字符
		.arg(u8"马赫数大小_1", -16+5)                 // 左对齐，占位12字符
		.arg(u8"重量值_1",     -16+3);                // 左对齐，占位12字符

	ui->textBrowser->append(text);
	ui->textBrowser->append(textWithChinese);
}

TextFormatDisplayDemos::~TextFormatDisplayDemos()
{
    delete ui;
}
