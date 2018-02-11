#include "TestObject.h"
#include <iostream>

using namespace std;

TestObject::TestObject()
{
}


TestObject::~TestObject()
{
}

void TestObject::SendEvent(int i)
{
	cout << "Clicked" << endl;
}
