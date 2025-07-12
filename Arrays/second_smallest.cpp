#include <bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[], int n)
{
    if (n < 2)  return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    for (int i = 0; i < n; i++){
        if (arr[i] < small){
            second_small = small;
            small = arr[i];
        }
        else if (arr[i] < second_small && arr[i] != small){
            second_small = arr[i];
        }
    }
    return second_small;
}

int main()
{
    int arr[] = {42, 7, 89, 23, 56, 91, 15, 38, 62, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = secondSmallest(arr, n);
    cout << "Second smallest element is " << num << endl;
    return 0;
}