//Given two vectors, return median of two vectors combined
// Leetcode level-hard

#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp = nums1;
        temp.insert(temp.end(),nums2.begin(),nums2.end());
        sort(temp.begin(),temp.end());
        if(temp.size() % 2 == 0) {
           return (temp[temp.size()/2] + temp[temp.size()/2-1])/2.0;
        }
        else
           return  temp[temp.size()/2.0];
}

int main(void) {
    vector<int> v1 = {6,1,3};
    vector<int> v2 = {2,5,4};
    cout << findMedianSortedArrays(v1,v2);
    return 0;
}