#include "pch.h"
#include "CppUnitTest.h" 

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestingTask1
{
	TEST_CLASS(UnitTestingTask1)
	{
	public:
		
		TEST_METHOD(Calculating_Perimeter_Of_Rectangle)
		{
			// This is testing perimeter of a rectangle 
			int length = 1;
			int width = 1;
		
			int result = getPerimeter(&length, &width);			
			Assert::AreEqual(4, result); // checks expected value (4) with actual value.
			 

			
		}

		TEST_METHOD(Calculating_Area_Of_Rectangle)
		{
			// This is testing area of a rectangle 

			int length = 1;
			int width = 1;

			int results = getArea(&length, &width);
			Assert::AreEqual(1, results); // checks expected value (1) with actual value.
		}
	};
}
