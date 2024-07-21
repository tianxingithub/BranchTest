#pragma once
#include <QDialog>
#include "ui_BTQssEditor.h"
QT_BEGIN_NAMESPACE
namespace Ui { class BTQSSDialog; };
QT_END_NAMESPACE


class BTQssEditor : public QDialog
{
	Q_OBJECT
public:
	BTQssEditor(QWidget*parent = nullptr);
	~BTQssEditor();

// 	// 重写按键响应，看能否解决ESC关闭窗体的问题
// protected:
// 	void keyPressEvent(QKeyEvent* event) override;

private:
	Ui::BTQSSDialog*ui;
};

