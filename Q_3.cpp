// Question 3
// A permutation of an array of integers is an arrangement of its members into a
// sequence or linear order.

// For example, for arr = [1,2,3], the following are all the permutations of arr:
// [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].

// The next permutation of an array of integers is the next lexicographically greater
// permutation of its integer. More formally, if all the permutations of the array are
// sorted in one container according to their lexicographical order, then the next
// permutation of that array is the permutation that follows it in the sorted container.

// If such an arrangement is not possible, the array must be rearranged as the
// lowest possible order (i.e., sorted in ascending order).

// ● For example, the next permutation of arr = [1,2,3] is [1,3,2].
// ● Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
// ● While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not
// have a lexicographical larger rearrangement.

// Given an array of integers nums, find the next permutation of nums.
// The replacement must be in place and use only constant extra memory.

#include<bits/stdc++.h>
using namespace std;
void next_permutation(vector<int>& nums) 
    {
        int n=nums.size();
        int l,r;
        for(l=n-2;l>=0;l--)                           // find decreasing sequence
        {
            if(nums[l]<nums[l+1]) break;
        }
        if(l<0) reverse(nums.begin(),nums.end());
        else
        {
            for(r=n-1;r>l;r--)                       // find rightmost successor to pivot
            {
                if(nums[r]>nums[l]) break;
            }
            swap(nums[l],nums[r]);                  // swap l,r
            
            reverse(nums.begin()+l+1,nums.end());   // reverse from l+1 to end
        }
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
    next_permutation(arr);
    cout<<"Output is: \n";
    for(auto i:arr)
    cout<<i<<" ";
    return 0;
}