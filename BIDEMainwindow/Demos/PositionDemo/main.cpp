#include "PositionDemo.h"
#include <QtWidgets/QApplication>

/**
 * ���Դ���ָ�����
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PositionDemo w;
    w.showMaximized();
    return a.exec();
}
