#include <bits/stdc++.h>

using namespace std;
void merge(int nums[], int low, int mid, int high){
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= high){
        if (nums[left] <= nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while (left <= mid){
        temp.push_back(nums[left]);
        left++;
    }
    while (right <= high){
        temp.push_back(nums[right]);
        right++;
    }
    for (int i = low; i <= high; ++i){
        nums[i] = temp[i - low];
    }
}
void merge_sort(int nums[], int l, int r){
    int low = l;
    int high = r;
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    merge_sort(nums, low, mid);
    merge_sort(nums, mid + 1, high);
    merge(nums, low, mid, high);
}
int main(){
    int arr[] = {10, 54, 2, 32, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before merge sort: " << "\n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    merge_sort(arr, 0, n-1);

    cout << "After merge sort: " << "\n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
