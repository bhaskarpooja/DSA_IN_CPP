#include <bits/stdc++.h>

using namespace std;
void bubble_sort(int arr[], int n){
    for (int i = n - 1; i >= 1; i--){
        for (int j = 0; j <= i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main(){
    int arr[] = {10, 54, 2, 32, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before bubble sort: " << "\n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    bubble_sort(arr, n);

    cout << "After bubble sort: " << "\n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
