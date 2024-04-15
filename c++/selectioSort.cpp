#include<iostream>
using namespace std;
void selectionSort(int arr[],int n,int& com,int& swaps){
    int minIndx = 0;
    for(int i=0;i<n-1;i++){
        minIndx = i;
        for(int j=i+1;j<n;j++){
            com++;
            if(arr[j] < arr[minIndx]){
                minIndx = j;
           }
        }
        if(minIndx!=i){
            swaps++;
            swap(arr[i],arr[minIndx]);
        }
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
    int N = sizeof(arr)/sizeof(arr[0]);
    int a=0;
    int b=0;
    selectionSort(arr, N,a,b);
    printArray(arr, N);
    cout<<a<<" "<<b;
    return 0;
}