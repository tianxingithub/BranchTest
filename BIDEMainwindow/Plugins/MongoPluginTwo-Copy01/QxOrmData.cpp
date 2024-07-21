#include "QxOrmData.h"

// Plugin Two
#ifndef QX_REGISTER_CPP_QX_QXORMDATA
QX_REGISTER_CPP_QX_QXORMDATA(QxOrmData)
#endif


namespace qx {
	template <>void register_class(QxClass<QxOrmData>& t)
	{
		//! 用于qx::dao::insert(data)
		//! 不写下面的值，insert的时候就没有那个属性

		t.data(&QxOrmData::m_date, "Date");
		t.data(&QxOrmData::m_time, "Time");
		t.data(&QxOrmData::m_week, "Week");
	}
}