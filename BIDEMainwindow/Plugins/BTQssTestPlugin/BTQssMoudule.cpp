#include "BTQssMoudule.h"
// #include "bt/btmodule/btcat"
#include "BTQssEditor.h"


BTQssMoudule::BTQssMoudule(QObject*parent)
	:BT::BTModule(parent)
{
	int a = 1;
	a++;
}


BTQssMoudule::~BTQssMoudule()
{
	int b = 1;
	b--;
}

QDialog* BTQssMoudule::editor()
{
	if (!m_editor)
	{
		m_editor = new BTQssEditor;
	}
	return m_editor;
}

QWidget* BTQssMoudule::tabEditor()
{
	return editor();
}

void BTQssMoudule::run()
{

}
