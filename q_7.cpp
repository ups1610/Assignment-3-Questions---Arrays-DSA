// Question 7
// You are given an inclusive range [lower, upper] and a sorted unique integer array
// nums, where all elements are within the inclusive range.

// A number x is considered missing if x is in the range [lower, upper] and x is not in
// nums.

// Return the shortest sorted list of ranges that exactly covers all the missing
// numbers. That is, no element of nums is included in any of the ranges, and each
// missing number is covered by one of the ranges.

// Example 1:
// Input: nums = [0,1,3,50,75], lower = 0, upper = 99
// Output: [[2,2],[4,49],[51,74],[76,99]]

// Explanation: The ranges are:
// [2,2]
// [4,49]
// [51,74]
// [76,99]
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> shortest_missing_range(vector<int>&arr, int lower, int upper)
{
   int n=arr.size();
   unordered_set<int>s;
   for(auto i:arr)
   s.insert(i);
   vector<vector<int>>ans;
   int rs = 0 , re = 0;
   for(int i=lower;i<=upper;i++)
   {
      if(s.find(i)!=s.end())continue;
      else{
        rs = i;
          while(i<=upper)
          {
             if(s.find(i)!=s.end())
             {
                re=i-1;
                break;
             }
             i++;
          }
          if(i>=upper)
          re=upper;
        ans.push_back({rs,re});  
      }
      i--;
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
    
    int lower = 0, upper = 0;
    cout<<"Enter the lower and upper range: \n";
    cin>>lower>>upper;
    vector<vector<int>> ans = shortest_missing_range(arr,lower,upper);
    cout<<"Output is: \n";
    for(auto a:ans)
    {
        for(auto i:a)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}