#include <iostream>
#include <iomanip>
using namespace std;

void CreateArrayRec(int* arr, const int size, const int low, const int high, int i = 0) {
    if (i >= size) return;
    arr[i] = low + rand() % (high - low + 1);
    CreateArrayRec(arr, size, low, high, i + 1);
}

void PrintArrayRec(const int* arr, const int size, int i = 0) {
    if (i >= size) {
        cout << endl;
        return;
    }
    cout << setw(4) << arr[i];
    PrintArrayRec(arr, size, i + 1);
}


int FindLargestOddRec(const int* arr, const int size, int i = 0, int largestOdd = -1, int largestOddIndex = -1) {
    if (i >= size) return largestOddIndex;
    if (arr[i] % 2 != 0 && arr[i] > largestOdd) {
        largestOdd = arr[i];
        largestOddIndex = i;
    }
    return FindLargestOddRec(arr, size, i + 1, largestOdd, largestOddIndex);
}


void SwapWithLargestOddRec(int* arr, const int size) {
    int largestOddIndex = FindLargestOddRec(arr, size);
    if (largestOddIndex != -1) {
        swap(arr[size - 1], arr[largestOddIndex]);
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int low = -50, high = 50;

   
    CreateArrayRec(arr, SIZE, low, high);
    cout << "   Start: ";
    PrintArrayRec(arr, SIZE);

  
    SwapWithLargestOddRec(arr, SIZE);

    
    cout << "Modified: ";
    PrintArrayRec(arr, SIZE);

    return 0;
}
