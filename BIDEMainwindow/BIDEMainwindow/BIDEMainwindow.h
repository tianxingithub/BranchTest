#pragma once

#include <QtWidgets/QMainWindow>
#include "bt/BTGui/BTMainWindow.h"

class BIDEMainwindow : public BT::BTMainWindow
{
	Q_OBJECT

public:
    /**
	 * @class BIDEMainwindow
	 * @brief BIDE框架主界面类
	 *
	 * 继承自BT::BTMainWindow，BTMainWindow
	 */
    BIDEMainwindow(QWidget *parent = nullptr);
    ~BIDEMainwindow();

private:
    //! 响应FaceInter的 enterLabelClicked 信号 
    void enterLabelClickedSlot();

protected:
    //! @name 工程管理槽函数
    //@{
    //! 新建响应
    void newSlot()    override;
    // 打开响应
    void openSlot()   override;
    //! 保存响应
    void saveSlot()   override;
	//! 另存响应
    void saveasSlot() override;
    //@}
};
