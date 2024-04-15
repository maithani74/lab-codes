import java.util.Arrays;

class first{
    public static int solve(int arr[],int k){
        int count = 0;
        Arrays.sort(arr);
        int l=0;
        int r=0;
        while(r<arr.length){
            if(arr[r]-arr[l] == k){
                count++;
                l++;
                r++;
            }
            else if(arr[r]-arr[l]<k){
                r++;
            }
            else if(arr[r]-arr[l]>k){
                l++;
            }
        }
        return count;
    }
    public static void main(String args[]){
        int arr[] = {8, 12, 16, 4, 0, 20};
        int k = 4;
        int ans = solve(arr,k);
        System.out.println(ans);
    }
}