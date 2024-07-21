#include "QxOrmData.h"

// Plugin Two
#ifndef QX_REGISTER_CPP_QX_QXORMDATA
QX_REGISTER_CPP_QX_QXORMDATA(QxOrmData)
#endif


namespace qx {
	template <>void register_class(QxClass<QxOrmData>& t)
	{
		//! ����qx::dao::insert(data)
		//! ��д�����ֵ��insert��ʱ���û���Ǹ�����

		t.data(&QxOrmData::m_date, "Date");
		t.data(&QxOrmData::m_time, "Time");
		t.data(&QxOrmData::m_week, "Week");
	}
}