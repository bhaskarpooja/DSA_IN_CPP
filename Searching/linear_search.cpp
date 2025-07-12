#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &nums, int target)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if(nums[i]==target){
            return i;
        }
    }
    
    return -1;
}

int main()
{
    vector<int> nums = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int index = linearSearch(nums, target);
    if (index == -1)
    {
        cout << "The target is not present in the numsay." << endl;
    }
    else
    {
        cout << "The target found at index: " << index << endl;
    }
    return 0;
}
