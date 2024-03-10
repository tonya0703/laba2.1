#include "pch.h"
#include "CppUnitTest.h"
#include "../Project2.1/Point.h"
#include "../Project2.1/Point.cpp"
#include "../Project2.1/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point n;
			int t = n.getFirst();
			Assert::AreEqual(0, t);

		}
	};
}
