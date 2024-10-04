#include "pch.h"
#include "CppUnitTest.h"
#include "..\\Lab 5.4\\Lab 5.4.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace labTest
{
	TEST_CLASS(labTest)
	{
	public:

		TEST_METHOD(TestP0)
		{
			double result = P0(1, 10);  
			double expected = 119952.30018471014;
			Assert::AreEqual(expected, result); 
		}

		TEST_METHOD(TestP1)
		{
			double result = P1(1, 10, 1);  
			double expected = 119952.30018471014;
			Assert::AreEqual(expected, result, 0.0001);
		}

		TEST_METHOD(TestP2)
		{
			double result = P2(1, 10, 10);  
			double expected = 119952.30018471014;
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(TestP3)
		{
			double result = P3(1, 10, 1, 1);  
			double expected = 119952.30018471014;
			Assert::AreEqual(expected, result);
		}

		TEST_METHOD(TestP4)
		{
			double result = P4(1, 10, 10, 1); 
			double expected = 119952.30018471014;
			Assert::AreEqual(expected, result, 0.0001);  
		}
	};
}
