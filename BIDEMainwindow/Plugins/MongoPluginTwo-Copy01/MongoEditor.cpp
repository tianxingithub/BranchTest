#include "MongoEditor.h"
#include "QxOrmData.h"
#include <QMessageBox>

MongoEditor::MongoEditor(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::MongoEditorClass())
{
	ui->setupUi(this);
	connectDB();
	connect(ui->btnInsert, &QPushButton::clicked, this, &MongoEditor::btnInsertSlot);
}

MongoEditor::~MongoEditor()
{
	delete ui;
}

void MongoEditor::btnInsertSlot()
{
	QxOrmData data;
	data.m_date = QDate::currentDate();
	data.m_week = data.m_date.toString("dddd");
	data.m_time = QTime::currentTime();

	qx::dao::insert(data);


	list_data datas;
	qx_query query("");
	QSqlError err = qx::dao::fetch_by_query(query, datas);

	QString info;
	info += u8"插入文件成功，当前有" + QString::number(datas.size()) + u8"个文档";
	QMessageBox::information(nullptr, u8"成功", info);

	int a;
}

void MongoEditor::connectDB()
{
	
}
