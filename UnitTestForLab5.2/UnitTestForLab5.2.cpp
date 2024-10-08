#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna robota nomer 5.2/Lab 5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForLab52
{
	TEST_CLASS(UnitTestForLab52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double A(const double Pi, const int n, double a);
			{
				double a;
				const double Pi = 3.14;
				double R = Pi / 2;
				a *= R;
				return a;
			};
		}
	};
}
