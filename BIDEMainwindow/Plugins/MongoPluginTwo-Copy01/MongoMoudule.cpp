#include "MongoMoudule.h"
#include "MongoEditor.h"
#include "precompiled.h"

MongoMoudule::MongoMoudule(QObject*parent)
	:BT::BTModule(parent)
{
	int a = 1;
	a++;

	// Following command is recommanded to initialize QxOrm introspection engine
	qx::QxClassX::registerAllClasses();

	// Parameters to connect to MongoDB database
	qx::QxSqlDatabase* pDatabase = qx::QxSqlDatabase::getSingleton();
	pDatabase->setDriverName("QXMONGODB");
	pDatabase->setDatabaseName("Mongo2015");
	pDatabase->setHostName("localhost");
	pDatabase->setPort(27017);
	pDatabase->setUserName("");
	pDatabase->setPassword("");

	// For debug purpose : log all replies from MongoDB database
	qx::dao::mongodb::QxMongoDB_Helper::setLogDatabaseReply(true);
}

// 主程序关闭才调用 
MongoMoudule::~MongoMoudule()
{
	int b = 1;
	b--;

}

QDialog* MongoMoudule::editor()
{
	if (!m_editor)
	{
		m_editor = new MongoEditor;
	}
	return m_editor;
}

QWidget* MongoMoudule::tabEditor()
{
	return editor();
}

void MongoMoudule::run()
{

}
