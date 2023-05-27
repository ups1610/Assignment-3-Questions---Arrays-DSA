// Given an integer array nums of length n and an integer target, find three integers
// in nums such that the sum is closest to the target.
// Return the sum of the three integers.
// You may assume that each input would have exactly one solution.
// Example 1:
// Input: nums = [-1,2,1,-4], target = 1
// Output: 2
// Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
#include<bits/stdc++.h>
using namespace std;

int closestSum(vector<int>&nums, int target)
{
    sort(nums.begin(),nums.end());
    int mx = INT_MAX;
    int ans = 0;
    for(int i=0;i<nums.size();i++)
    {
        int j = i+1;
        int k = nums.size()-1;
        int sum = 0;
        while(j<k)
        {
            sum=nums[i]+nums[j]+nums[k];
            if(abs(target-sum)<mx)
            {
                mx = abs(target-sum);
                ans = sum;
            }
            if(sum<target)
            j++;
            else
            k--;
        }
    }
    return ans;
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
    int ans = closestSum(arr,target);
    cout<<"Output is: \n";
    cout<<ans<<endl;
    return 0;
}