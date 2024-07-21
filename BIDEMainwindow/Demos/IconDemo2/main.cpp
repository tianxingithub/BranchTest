#include "IconDemo2.h"
#include <QtWidgets/QApplication>

/**
 * 测试图标添加
 * 就是从添加资源文件那里添加ICO文件
 * 添加完后，直接就应用起来了
 * 注意：只添加一次！若添加多个可能导致程序错误
 * 若要修改图标，保证名称一样！（避免未知错误）
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IconDemo2 w;
    w.show();
    return a.exec();
}
