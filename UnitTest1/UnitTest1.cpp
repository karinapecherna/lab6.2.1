#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2.1/FileName.cpp"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

      

        TEST_METHOD(TestSwapWithLargestOddRec)
        {
            const int SIZE = 5;
            int arr[SIZE] = { 11, -3, 15, 9, 10 };  // 15 - найбільший непарний
            SwapWithLargestOddRec(arr, SIZE);

            Assert::AreEqual(15, arr[SIZE - 1]);
        }

      
    };
}

