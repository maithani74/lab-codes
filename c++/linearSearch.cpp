#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t > 0)
    {
        int length, key, count = 0;
        cin >> key;
        cin >> length;
        int arr[length];
        for (int i = 0; i < length; i++)
        {
            cin >> arr[i];
        }
        bool flag = false;
        int low = 0;
        int high = length - 1;
        while (low <= high)
        {
            count++;
            int mid = low + (high - low) / 2;
            if (arr[mid] == key)
            {
                flag = true;
                break;
            }
            else if (key > arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        t--;
        if(flag==true)cout<<"Found"<<count;
        else cout<<"Not Found"<<count;
    }
}