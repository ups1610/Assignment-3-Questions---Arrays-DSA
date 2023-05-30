// Question 5
// You are given a large integer represented as an integer array digits, where each
// digits[i] is the ith digit of the integer. The digits are ordered from most significant
// to least significant in left-to-right order. The large integer does not contain any
// leading 0's.

// Increment the large integer by one and return the resulting array of digits.

// **Example 1:**
// Input: digits = [1,2,3]
// Output: [1,2,4]

// **Explanation:** The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].
#include<bits/stdc++.h>
using namespace std;
 vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
         
        while(i>=0)
        {
          if(digits[i]==9 && i==0)
          {
            digits[0]=1;
            digits.push_back(0);
            return digits;
          }
          else if(digits[i]==9){
            digits[i]=0;
            i--;
          }
          else if(digits[i]!=9){
             digits[i]+=1;
             return digits;
          }
        }
    return digits;
}
int main()
{
    int n;
    cout<<"Enter the digit size\n";
    cin>>n;
    cout<<"Enter digit elements :\n";
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int val;
    
    vector<int>ans = plusOne(arr);
    cout<<"Output is : \n";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}


