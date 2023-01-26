#include <bits/stdc++.h>
using namespace std;

//equilibrium point - point when sum of elements before it = sum after it of array;

int equilibriumPoint(long long a[], int n) {
        if(n == 1)
            return 1;
        
        long long s1 = a[0], s2 = 0;
        for(int i = 2; i < n; i++)
            s2 += a[i];
        
        for(int i = 1; i<(n-1); i++) {
            if(s1 == s2) {
                return i+1;
            }
            else {
                s1 += a[i];
                s2 -= a[i+1];
            }
            
        }
        return -1;
    }


int main(void) {
    long long arr[6] = {2,3,3,3,1,1}; // 2+3 = 3+1+1 = 5 at point 3
    cout << equilibriumPoint(arr,6);
}