#pragma once

#include <QWidget>
#include "ui_FaceInter.h"

QT_BEGIN_NAMESPACE
namespace Ui { class FaceInterClass; };
QT_END_NAMESPACE

/*!
* @class FaceInter
* @brief 重写BIDE框架界面的QWidget
* 替换默认的QWidget内容，需要设置一个spliter把widget顶上去
*/
class FaceInter : public QWidget
{
	Q_OBJECT

public:
	FaceInter(QWidget *parent = nullptr);
	~FaceInter();

public:
	//! \name 测试函数的参数格式
	//@{
	/*!
	 * \brief 得到光标的位置
	 * \return 返回光标的x,y坐标之和
	 */
	int getSize() {}
	/*!
	 * \brief 设置光标的x,y位置
	 * \param x:int 光标的x坐标
	 * \param y:int 光标的y坐标
	 * \param isClick:bool 光标是否点击
	 */
	void setSize(int x, int y, bool isClick) {}
	//@}

protected:
	//! 鼠标响应过滤器，响应QWidget里面的Lable
	bool eventFilter(QObject* obj, QEvent* event);

private:
	Ui::FaceInterClass *ui;


signals:
	//! 传递给BIDEMainwindow
	void enterLabelClicked();
};
