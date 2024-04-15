#include <iostream>
using namespace std;

int con = 0;
int ex = 0;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            con++;
            arr[j + 1] = arr[j];
            ex++;
            j = j - 1;
        }
        ex++;
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = {8, 5, 9, 2, 6, 3}; //      1 1 1 1 1
    int N = sizeof(arr) / sizeof(arr[0]);// 1 1 1 1
    insertionSort(arr, N);
    printArray(arr, N);
    cout << con << " " << ex;
    return 0;
}