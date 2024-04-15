#include<iostream>
using namespace std;

void merge(int arr[],int low, int mid, int high){
    int b[100];
    int i = low;
    int j =mid+1;
    int k = low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            b[k] = arr[i];
            i++;
            k++;
        }else{
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        b[k] = arr[i];
        i++;
        k++;
    }
    while(j<=high){
        b[k] = arr[k];
        j++;
        k++;
    }
    for(int i=0;i<high;i++){
        arr[i] = b[i];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
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
    mergeSort(arr,0, N);
    printArray(arr, N);
    return 0;
}