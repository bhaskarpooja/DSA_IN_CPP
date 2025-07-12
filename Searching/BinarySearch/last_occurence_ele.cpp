#include <bits/stdc++.h>
using namespace std;

int lastOccurenceOfElement(vector<int> &arr, int ele){
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high){
        int mid = low + (high - low) / 2;
        if (arr[mid] == ele){
            ans = mid;
            low = mid + 1;
        }
        else if (ele < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 5, 7, 9, 11, 11, 45, 77};
    int ele = 11;
    
    cout <<"The last occurence index of element is "<<lastOccurenceOfElement(arr, ele) << endl;

    return 0;
}