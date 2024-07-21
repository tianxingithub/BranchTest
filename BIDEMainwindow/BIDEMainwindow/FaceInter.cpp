#include "FaceInter.h"

#include <QMouseEvent>

FaceInter::FaceInter(QWidget *parent)
	: QWidget(parent)
	, ui(new Ui::FaceInterClass())
{
	ui->setupUi(this);
	ui->enter_label_2->installEventFilter(this);

}

FaceInter::~FaceInter()
{
	delete ui;
}

bool FaceInter::eventFilter(QObject* obj, QEvent* event)
{
	if (obj != ui->enter_label_2) {
		return QWidget::eventFilter(obj, event);
	}
	if (event->type() == QEvent::MouseButtonPress) //Êó±êµã»÷
	{
		QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(event);
		if (mouseEvent->button() == Qt::LeftButton)
		{
			if (obj == ui->enter_label_2) {
				emit enterLabelClicked();
			}

			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

