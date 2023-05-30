// Question 4
// Given a sorted array of distinct integers and a target value, return the index if the
// target is found. If not, return the index where it would be if it were inserted in
// order.

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2

#include<bits/stdc++.h>
using namespace std;
int search_index(vector<int>&arr,int target){
    int index = lower_bound(arr.begin(),arr.end(),target)-arr.begin();
    return index;
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
    
    int target = 0;
    cout<<"Enter the target: \n";
    cin>>target;
    int ans = search_index(arr,target);
    cout<<"Output is: \n";
    cout<<ans<<endl;
    return 0;
}