#pragma once
#include <QWidget>
#include "ui_BTQssEditor.h"
QT_BEGIN_NAMESPACE
namespace Ui { class BTQSSWidget; };
QT_END_NAMESPACE


class BTQssEditor : public QWidget
{
	Q_OBJECT
public:
	BTQssEditor(QWidget*parent = nullptr);
	~BTQssEditor();

// 	// ��д������Ӧ�����ܷ���ESC�رմ��������
// protected:
// 	void keyPressEvent(QKeyEvent* event) override;

private:
	Ui::BTQSSWidget*ui;
};

