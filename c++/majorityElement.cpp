#include<iostream>
using namespace std;

int solve(int arr[],int n){
    int indx = 0;
    int count = 1 ;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[indx]){
            count++;
        }else{
            count--;
        }
        if(count==0){
            indx=i;
            count=1;
        }
    }
    return arr[indx];
}

int main(){
    int  arr[]={3, 4, 4, 2, 4, 4, 2, 3, 4};
    int ans = solve(arr,9);
    cout<<ans;
}