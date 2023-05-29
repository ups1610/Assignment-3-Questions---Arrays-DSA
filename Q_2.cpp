// Question 2
// Given an array nums of n integers, return an array of all the unique quadruplets
// [nums[a], nums[b], nums[c], nums[d]] such that:
//            ● 0 <= a, b, c, d < n
//            ● a, b, c, and d are distinct.
//            ● nums[a] + nums[b] + nums[c] + nums[d] == target

// You may return the answer in any order.

// Example 1:
// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> quadruplets(vector<int>& nums, int target)
{
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for(int i =0 ;i < n ;i++)
    {
        for(int j = i+1 ;j< n ;j++)
        {
            int k = j+1;
            int  l = n-1;
            int residue = target - nums[i] - nums[j];
            while(k<l)
            {
                int sum = nums[k]+nums[l];
                if(sum<residue)
                k++;
                else if(sum>residue)
                l--;
                else{
                    ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                    l--;
                }
            }
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
    vector<vector<int>>ans = quadruplets(arr,target);
    cout<<"Output is: \n";
    for(auto quad:ans)
    {
        for(auto i:quad)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}