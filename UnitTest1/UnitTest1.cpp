#include "pch.h"
#include "CppUnitTest.h"
#include "../5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 1;
			int x = 0;
			int n = 1;
			double c = A(x, a, n);
			Assert::AreEqual(c, 0.);
		}
	};
}
