#include <bits/stdc++.h>
using namespace std;

int kthElement(vector<int> &arr1, vector<int>& arr2, int m, int n, int k) {
    if (m > n){
        return kthElement(arr2, arr1, n, m, k);
    } 
    int left = k; 
    int low = max(0, k - n), high = min(k, m);

    while (low <= high) {
        int mid1 = (low + high) >> 1;
        int mid2 = left - mid1;
        
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < m) r1 = arr1[mid1];
        if (mid2 < n) r2 = arr2[mid2];
        if (mid1 - 1 >= 0) l1 = arr1[mid1 - 1];
        if (mid2 - 1 >= 0) l2 = arr2[mid2 - 1];

        if (l1 <= r2 && l2 <= r1) 
            return max(l1, l2);
        else if (l1 > r2) 
            high = mid1 - 1;
        else 
            low = mid1 + 1;
    }
    return 0;
}

int main(){
    vector<int> arr1 = {2, 13, 16, 37, 59};
    vector<int> arr2 = {11, 14, 28, 40};
    int ans=kthElement(arr1, arr2, arr1.size(), arr2.size(), 6);
    cout << "The kth element of two sorted array is: " <<ans <<endl;
}