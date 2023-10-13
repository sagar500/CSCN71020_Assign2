#include "pch.h"
#include "CppUnitTest.h"

extern "C" void setLength(int input, int* length); 

extern "C" void setWidth(int input, int* width);



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestingTask2
{
	TEST_CLASS(UnitTestingTask2)
	{
	public:

        // Unit tests for setLength function
        TEST_METHOD(SetLengthInRange) {
            int length = 0;
            setLength(25, &length);
            Assert::AreEqual(length, 25);
        }

        TEST_METHOD(SetLengthMinimumValue) {
            int length = 18;
            setLength(1, &length);
            Assert::AreEqual(length, 1);
        }

        TEST_METHOD(SetLengthMaximumValue) {
            int length = 100;
            setLength(100, &length);
            Assert::AreEqual(length, 100);  // Ensure the value remains within the valid range
        }

        // Unit tests for setWidth function
        TEST_METHOD(SetWidthInRange) {
            int width = 0;
            setWidth(50, &width);
            Assert::AreEqual(width, 50);
        }

        TEST_METHOD(SetWidthMinimumValue) {
            int width = 2;
            setWidth(1, &width);
            Assert::AreEqual(width, 1);
        }

        TEST_METHOD(SetWidthMaximumValue) {
            int width = 100;
            setWidth(100, &width);
            Assert::AreEqual(width, 100);  // Ensure the value remains within the valid range
        }
	};
}
