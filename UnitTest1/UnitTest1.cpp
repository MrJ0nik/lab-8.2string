#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			string test1 = ".Leading dot and trailing dot.Hello. This is a test.";
			capitalizeAfterDot(test1);
			Assert::AreEqual(string(".Leading dot and trailing dot.Hello. This is a test."), test1);

		}
	};
}
