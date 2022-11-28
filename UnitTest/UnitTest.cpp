#include "pch.h"
#include "CppUnitTest.h"
#include "H:\project\Харьков\BIPS\Labs_2\Labs_2\Labs_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(calculate_Tests)
	{
	public:
		TEST_METHOD(calculate7_and_minus1_24rtn)
		{
			int n = 7;
			int x = -1;
			int expec = 24;
			int actual = y(n, x);
			Assert::AreEqual(expec, actual);
		}

	public:
		TEST_METHOD(calculate3_and_5_1306rtn)
		{
			int n = 3;
			int x = 5;
			int expec = 1306;
			int actual = y(n, x);
			Assert::AreEqual(expec, actual);
		}
	};

	TEST_CLASS(checkValidParams_Tests)
	{
	public:
		TEST_METHOD(checkValidParams_minus100) 
		{
			int n = -100;
			int x = -100;
			try
			{
				checkValidParams(n, x);
				Assert::Fail();
			}
			catch (...) {
				Assert::IsTrue(true);
			}
		}
	};
}


