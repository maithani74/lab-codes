#include<iostream>
#include<vector>
using namespace std;

void swap(int* a,int* b ){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i=low;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[i],&arr[high]);
    return i;
}


int quickSelect(int arr[],int low,int high, int k){
    if(k>0 && k<=high-low+1){
        int pIndx = partition(arr,low,high);
        if(pIndx-low == k-1){
            return arr[pIndx];
        }else if(pIndx-low > k-1){
            return quickSelect(arr,low,pIndx-1,k);
        }
        return quickSelect(arr,pIndx+1,high,k-pIndx+low-1);
    }
    return -1;
}

int main(){
    int arr[] = { 12, 3, 5, 7, 4, 19, 26 };
    int N = sizeof(arr) / sizeof(arr[0]), K = 3;
 
    // Function call
    cout << "K'th smallest element is "
         << quickSelect(arr, 0, N - 1, K);
    return 0;
}