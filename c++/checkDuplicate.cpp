#include<iostream>
#include<algorithm>
using namespace std;

int findFirst(int arr[],int n,int key){
    int l = 0;
    int h = n-1;
    int first = -1;
    while(l<=h){
        int mid = l+(h-l)/2;
        if(arr[mid] == key){
            first = mid;
            h = mid-1;
        }else if(arr[mid]<key){
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    return first;
}

int findLast(int arr[],int n,int key){
    int l = 0;
    int h = n-1;
    int last = -1;
    while(l<=h){
        int mid = l+(h-l)/2;
        if(key==arr[mid]){
            last = mid;
            l=mid+1;
        }else if(key>arr[mid]){
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    return last;
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
    int arr[] = {12,23,45,45,76}; //      1 1 1 1 1
    int n = sizeof(arr) / sizeof(arr[0]);// 1 1 1 1
    int firstIndx = findFirst(arr,n,45);
    int lastIndx =  findLast(arr,n,45);
    int ans = lastIndx-firstIndx+1;
    cout << ans;
    return 0;
}