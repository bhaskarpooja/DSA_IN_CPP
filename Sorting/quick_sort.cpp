#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (j >= low && arr[j] > pivot) j--;
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}
void quick_sort(int arr[], int low, int high){
    if (low < high){
        int middle = partition(arr, low, high);
        quick_sort(arr, low, middle - 1);
        quick_sort(arr, middle + 1, high);
    }
}       

int main()
{
    int arr[] = {10, 54, 2, 32, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before quick sort: " << "\n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    quick_sort(arr, 0, n-1);

    cout << "After quick sort: " << "\n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
