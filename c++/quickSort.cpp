#include<iostream>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    do{
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }while(i<j);
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(int arr[],int low, int high){
    if(low<high){
        int indx = partition(arr,low,high);
        quickSort(arr,low,indx-1);
        quickSort(arr,indx+1,high);
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
    quickSort(arr,0, N-1);
    printArray(arr, N);
    return 0;
}