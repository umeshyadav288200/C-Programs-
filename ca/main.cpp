#include <iostream>

using namespace std;

void insertionSort(int arr[], int length);
void printArray(int M[], int size);

int main()
{
    int M[6] = {5, 1, 6, 2, 4, 3};
    insertionSort(M, 6);
    return 0;
}

void insertionSort(int arr[], int length)
{
    int i, j, key;
    for (i = 1; i < length; i++)
    {
        key = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] >key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j +1] = key;

    }
    cout << "Sorted Array: ";

    printArray(arr, length);
}

void printArray(int M[], int size)
{
    int j;
    for (j = 0; j < size; j++)
    {
        cout <<" "<< M[j];
    }
    cout << endl;
}
