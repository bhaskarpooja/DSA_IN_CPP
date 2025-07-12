#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n)
{
    if (n < 2) return -1;
    int large = INT_MIN, second_large = INT_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i] > large){
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] > second_large && arr[i] != large){
            second_large = arr[i];
        }
    }
    return second_large;
}

int main()
{
    int arr[] = {42, 7, 89, 23, 56, 91, 15, 38, 62, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = secondLargest(arr, n);
    cout << "Second Largest element is " << num << endl;
    return 0;
}