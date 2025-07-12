#include <bits/stdc++.h>

using namespace std;
int findLargestElement(int arr[], int n)
{

    int max = arr[0];
    for (int i = 0; i < n; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {42, 7, 89, 23, 56, 91, 15, 38, 62, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = findLargestElement(arr, n);
    cout << "The largest element in the array is: " << max << endl;

    return 0;
}