#include <iostream>

using namespace std;

/**
 * @class Parent
 * @brief 测试多态的调用，父类调用子类的非override方法
 */
class Parent
{
public:
	Parent() {}

	void doSome()
	{
		cout << "parent do some" << endl;
	}

	void family() 
	{
		cout << "parent family\n";
	}

	virtual void human()
	{
		cout << "parent human\n";
	}
};

class Child : public Parent
{
public:
	Child() :Parent() {}

	void doSome()
	{
		cout << "child do some" << endl;
	}

	void family()
	{
		cout << "child family\n";
	}

	void human() override
	{
		cout << "child human\n";
	}
};

class Children : public Child
{
public:
	Children() :Child() {}

	void doSome()
	{
		cout << "children do some" << endl;
	}

	void family()
	{
		cout << "children family\n";
	}

	void human() override
	{
		cout << "children human\n";
	}

	void doChildren()
	{
		cout << "do Children\n";
	}
};

int main()
{
	Parent* parent = new Parent;
	Parent* parentChild = new Child;
	Parent* parentChildren = new Children;

// 	Child* child = new Child;
// 	Children* children = new Children;

	cout << "****************************** doSome ****************************\n";
	  parent->doSome();
// 	   child->doSome();
// 	children->doSome();
	parentChild->doSome();
	parentChildren->doSome();
	
	cout << "****************************** family ****************************\n";
	  parent->family();
// 	   child->family();
// 	children->family();
	parentChild->family();
	parentChildren->family();

	cout << "****************************** human ****************************\n";
	  parent->human();
// 	   child->human();
// 	children->human();
	parentChild->human();
	parentChildren->human();

// 	parentChildren->doChildren();

	return 0;
}