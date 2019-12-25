#include "pch.h"
#include "CppUnitTest.h"
#include "../TRPO Quadratic Equation/QuadEquation.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			QuadEquation(0, 0, 0);
			QuadEquation(-1, 0, 0);
			QuadEquation(9, 0, 7);
			QuadEquation(-1, 0, 36);
			QuadEquation(1, 3, 0);
			QuadEquation(1, -70, 600);
			QuadEquation(-4, 28, -49);
			QuadEquation(5, 6, 2);
			QuadEquation("a", 1, 2);
			QuadEquation(0, "b", 2);
			QuadEquation(3, 1, "c");
			QuadEquation("a", "b", "c");
			QuadEquation(2, -3, -2);
			QuadEquation(3, 5, -2);
		}
	};
}