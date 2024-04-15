#include<iostream>
using namespace std;

void solve(int arr[],int n){
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k = n-1;
        while(j<k){
            int sum =arr[i]+arr[j];
            if(sum==arr[k]){
                cout<<i<<" "<<j<<" "<<k<<endl;
                return;
            }else if(sum<arr[k]){
                j++;
            }else{
                k--;
            }
        }
    }
}

int main(){
    int arr[]= {2,4,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);
    return 0;
}