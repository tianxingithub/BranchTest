#pragma once

#include "bt/btmodule/BTPlugin.h"
#include <QObject>

class MongoPlugin :public BT::BTPlugin
{
	Q_OBJECT
	Q_PLUGIN_METADATA(IID BTPlugin_IID)
	Q_INTERFACES(BT::BTPlugin)
public:
	MongoPlugin(QObject *parent = nullptr);
	~MongoPlugin();

	BT::BTModule* createCustomModule();
};

