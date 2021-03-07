#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1.6/Equilateral.h"
#include "../Project1.6/Equilateral.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
	TEST_CLASS(UnitTest16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Equilateral::Triangle z;
			double k = 0;
			k = z.Perimeter();
			Assert::AreEqual(0,0);
		}
	};
}
