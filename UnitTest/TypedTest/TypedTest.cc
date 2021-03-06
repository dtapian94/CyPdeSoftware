#include "gtest/gtest.h"
#include "Hierarchie.h"
#include <iostream>


template<class T>
class Fixture : public ::testing::Test 
{
public:

	void SetUp()
	{
		parent = new T;
	}
	void Teardown()
	{
		delete parent;
	}
	Parent* parent;
};

typedef ::testing::Types<Child1, Child2, Child3> implementations;

TYPED_TEST_CASE(Fixture, implementations);

TYPED_TEST(Fixture, implementations)
{
	this->parent->doSomething();

}

