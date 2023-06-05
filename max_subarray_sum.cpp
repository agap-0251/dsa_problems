// kaidens algorithm - Geeksforgeeks medium

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long currSum = 0;
        long long maxSum = INT_MIN;
        for(int i = 0; i < n; i++) {
            currSum = max((long long)arr[i],currSum + arr[i]);
            maxSum = max(maxSum,currSum);
        }
        return maxSum;
        
    }
};

int main() {
    int n = 6;
    int arr[n] = {4,-1,3,-2,1,5};
    Solution s;
    cout << s.maxSubarraySum(arr,n);

}