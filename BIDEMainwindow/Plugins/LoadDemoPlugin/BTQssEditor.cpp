#include "BTQssEditor.h"

#include <QCheckBox>
#include <QKeyEvent>
#include <QShortcut>
#include <QKeySequence>

BTQssEditor::BTQssEditor(QWidget*parent)
	:QWidget(parent)
	,ui(new Ui::BTQSSWidget())
{
	ui->setupUi(this);
	ui->treeWidget->setAlternatingRowColors(true);
	ui->tableWidget->setAlternatingRowColors(true);
// 	ui->tableWidget->set
	this->setStyleSheet("QDialog { background-color:#f0f2f5}");



	ui->checkBox->setTristate(true);
	ui->checkBox_2->setTristate(true);
	ui->checkBox_3->setTristate(true);
	ui->checkBox_4->setTristate(true);


	// ���� ESC ��ݼ������ӵ��ۺ���
// 	QShortcut* shortcut = new QShortcut(QKeySequence(Qt::Key_Escape), this);

}


BTQssEditor::~BTQssEditor()
{
	delete ui;
}

// void BTQssEditor::keyPressEvent(QKeyEvent* event)
// {
// 	// ������� ESC ������رնԻ���
// 	if (event->key() == Qt::Key_Escape)
// 	{
// 		
// 	}
// 	else
// 	{
// 		// �������������������ദ��
// 		QDialog::keyPressEvent(event);
// 	}
// }


