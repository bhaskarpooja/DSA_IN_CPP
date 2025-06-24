#include <bits/stdc++.h>

using namespace std;
void insertion_sort(int arr[], int n){
    for (int i = 0; i < n; i++){
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]){
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main()
{
    int arr[] = {10, 54, 2, 32, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertion_sort(arr, n);

    cout << "After insertion sort: " << "\n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
