#include "pch.h"
#include "CppUnitTest.h"
#include<C:\Users\Vitaly\source\repos\ПрограмЗабезпеч2.2\ПрограмЗабезпеч2.2\ПрограмЗабезпеч2.2.cpp>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab3
{
	TEST_CLASS(Lab3)
	{
	public:
		
		TEST_METHOD(calculate_get8and3_12returned)
		{
			int a = 1;
			int b = 3;
			int x = 8;
			int expected = 12;
		}
		
		TEST_METHOD(deliberately_wrong)
		{
			int a = 1;
			int b = 3;
			int x = 8;
			int expected = 23000000;
		}
	};
}
