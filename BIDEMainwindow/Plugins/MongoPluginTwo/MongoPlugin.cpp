#include "MongoPlugin.h"
#include "MongoMoudule.h"


MongoPlugin::MongoPlugin(QObject *parent)
	:BT::BTPlugin(parent)
{

}


MongoPlugin::~MongoPlugin()
{
}

BT::BTModule* MongoPlugin::createCustomModule()
{
	return new MongoMoudule;
}
