#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int low = 0;
        int high = n-1;
        int mid;
        do {
            mid = (low + high)/2;
            
            if(arr[mid] > k) {
                high = mid - 1;
            }
            else if(arr[mid] < k) {
                low = mid + 1;
            }
            else
                return mid;
            
            
        }while(low <= high);
        return -1;
    }
};

int main() {
    int n = 6;
    int arr[n] = {4,-1,3,-2,1,5};
    Solution s;
    cout << s.binarysearch(arr,n,3);
}