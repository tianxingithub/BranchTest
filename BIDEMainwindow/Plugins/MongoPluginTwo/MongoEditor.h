#pragma once

#include <QDialog>
#include "ui_MongoEditor.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MongoEditorClass; };
QT_END_NAMESPACE

class MongoEditor : public QDialog
{
	Q_OBJECT

public:
	MongoEditor(QWidget *parent = nullptr);
	~MongoEditor();
	void btnInsertSlot();
	void connectDB();
private:
	Ui::MongoEditorClass *ui;
};
