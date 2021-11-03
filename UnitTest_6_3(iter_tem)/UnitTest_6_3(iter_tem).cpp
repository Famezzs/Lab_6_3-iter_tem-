#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Home\source\repos\Lab_6_3(iter_tem)\Lab_6_3(iter_tem)\Lab_6_3(iter_tem).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63itertem
{
	TEST_CLASS(UnitTest63itertem)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 3;
			int a[n];
			a[0] = -1;
			a[1] = -2;
			a[2] = 0;

			Assert::AreEqual(MinElem<int>(a, n), -2);
		}
	};
}
