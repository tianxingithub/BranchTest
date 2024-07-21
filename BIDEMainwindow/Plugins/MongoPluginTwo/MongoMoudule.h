#pragma once
#include "bt/btmodule/BTModule.h"

class MongoEditor;
class MongoMoudule :public BT::BTModule
{
	Q_OBJECT
	DefineNonpointerMember(QString, InputFile)
	DefineNonpointerMember(QString, outputDir)
public:
	MongoMoudule(QObject*parent = nullptr);
	~MongoMoudule();
	QDialog* editor()override;

	QWidget* tabEditor() override;

	void run() override;
private:
	MongoEditor* m_editor{ nullptr };
};

