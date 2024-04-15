#include <iostream>
#include<algorithm>
using namespace std;
int solve(int arr[], int k, int n)
{
    int count = 0;
    sort(arr,arr+n);
    int l=0;
    int r=0;
    while(r<n){
        if(arr[r]-arr[l] == k){
            l++;
            r++;
            count++;
        }
        else if(arr[r]-arr[l]>k){
            l++;
        }else if(arr[r]-arr[l]<k){
            r++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 5, 3, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = solve(arr, 3, n);
    cout << ans;
}