#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &arr) {
    int n = arr.size(); 

    if (n == 1) return 0;
    if (arr[0] > arr[1]) return 0;
    if (arr[n - 1] > arr[n - 2]) return n - 1;

    int low = 1, high = n - 2;
    while (low <= high) {
        int mid = low + (high - low) / 2;;

        //if mid is peak element
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]){
            return mid;
        }
        // left part
        else if (arr[mid] > arr[mid - 1]){
            low = mid + 1;
        } 

        // right part
        else high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int ans = findPeakElement(arr);
    cout << "The peak element is "<<arr[ans]<<" at index: " << ans << endl;
    return 0;
}