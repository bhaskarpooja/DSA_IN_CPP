#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 5, 7, 9, 11, 32, 45, 54, 65};
    int target = 5;
    int index = binarySearch(arr, target);
    if (index == -1)
    {
        cout << "The target is not present in the array." << endl;
    }
    else
    {
        cout << "The target found at index: " << index << endl;
    }
    return 0;
}
