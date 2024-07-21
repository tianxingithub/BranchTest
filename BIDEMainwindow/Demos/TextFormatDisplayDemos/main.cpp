#include "TextFormatDisplayDemos.h"
#include <QtWidgets/QApplication>

/**
 * 测试中英文显示对齐
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TextFormatDisplayDemos w;
    w.show();
    return a.exec();
}
