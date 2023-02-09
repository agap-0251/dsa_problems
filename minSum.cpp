//Geeksforgeeks
//Min value of A[0]*B[0]+A[1]*B[1]+...,where A,B are arrays and shuffling is allowed

#include <bits/stdc++.h>
using namespace std;

long long int minValue(int a[], int b[], int n)
{
    // Your code goes here
    sort(a,a+n);
    sort(b,b+n);
    reverse(b,b+n);
    long long min_sum = 0;
    for(int i = 0; i < n; i++) {
        min_sum += a[i]*b[i];
    }
    return min_sum;
}

int main(void) {
    int ar1[] = {3,1,1};
    int ar2[] = {6,5,4};
    cout << minValue(ar1,ar2,3);
    return 0; 
}