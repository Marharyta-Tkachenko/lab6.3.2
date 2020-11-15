#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.3.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[6]{ 19,-19,-24,17,4,4 };
			c = Print(a, 6, 1);
			Assert::AreEqual(c, 2);
		}
	};
}
