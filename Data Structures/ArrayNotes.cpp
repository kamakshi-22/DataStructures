#include <iostream>
using namespace std;

int main()
{

    /*Array: Collection of similar data items
    stored at contiguous memory locations.*/

    // Declaration:
    int arr1[10];
    int arr[] = {10, 20, 30, 40};
    int arr[6] = {10, 20, 30, 40};

    // Array name gives address of first element of array
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    cout << *ptr;

    // Array members are accessed using pointer arithmetic.
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    cout << arr[2] << *(arr + 2); // both print 30

    // Array parameters are always passed as pointers, even when we use square brackets.
    int arr[] = {10, 20, 30, 40};
    int func(int ptr[])
    {
        int x = 10;
        Ptr = &x; // allowed bc ptr is pointer not array
    }
    func(arr);

    return 0;
}
