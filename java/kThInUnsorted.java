import java.util.Collections;
import java.util.PriorityQueue;

public class kThInUnsorted {
    public static int solve(int arr[],int k){
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
        for(int i=0;i<k;i++){
            pq.add(arr[i]);
        }
        for(int i=k;i<arr.length;i++){
            if(pq.peek()>arr[i]){
                pq.remove();
                pq.add(arr[i]);
            }
        }
        return pq.peek();
    }
    public static void main(String[] args) {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int k = 3;
    int ans = solve(arr,k);
    System.out.println(ans);
    }    
}
