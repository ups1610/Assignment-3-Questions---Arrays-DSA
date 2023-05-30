// Question 6
// Given a non-empty array of integers nums, every element appears twice except
// for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only
// constant extra space.

// Example 1:
// Input: nums = [2,2,1]
// Output: 1
#include<bits/stdc++.h>
using namespace std;
int only_element(vector<int>&arr)
{
    int xr=0;
    for(int i=0;i<arr.size();i++)
    {
        xr^=arr[i];
    }
    return xr;
}
int main()
{
    int n;
    cout<<"Enter array size: \n";
    cin>>n;
    cout<<"Enter array elements: \n";
    vector<int>arr(n,0);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int ans = only_element(arr);
    cout<<"Output is: \n";
    cout<<ans<<endl;
    return 0;
}