#pragma once
#include "precompiled.h"
#include <QDate>
#include <QTime>

class QxOrmData
{
public:
	QxOrmData() {}
	~QxOrmData() {	}

	QDate m_date;
	QTime m_time;
	QString m_week;

};

// Plugin Two
QX_REGISTER_HPP_QX_QXORMDATA(QxOrmData, qx::trait::no_base_class_defined, 0)

typedef QList<QxOrmData> list_data;
