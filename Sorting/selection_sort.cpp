#include <bits/stdc++.h>

using namespace std;
void selection_sort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
      int min = i;
      for (int j = i; j < n; j++)
      {
        if (arr[j] < arr[min])
        {
          min = j;
        }
      }
      swap(arr[i], arr[min]);
    }
    cout << "After selection sort: " << "\n";
    for (int i = 0; i < n; i++){
      cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {10, 54, 2, 32, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before selection sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
    selection_sort(arr, n);
    return 0;
}