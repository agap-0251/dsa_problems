#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, k , t;  //n-no.of bags, k- k minutes
    int q; //queries
    cin >> t; //test cases
    cin >> n >> k;
    long long candies_eaten = 0;  //max candies he can eat
    multiset <long long> s;
    for(int i = 0; i < n; i++) {
        long long candies;          // candies in each bag
        cin >> candies;
        s.insert(candies);
    }
    while(k--) {
        auto itr = (--s.end());
        long long max_candies = *itr;
        candies_eaten += max_candies;
        s.erase(itr);
        s.insert(max_candies/2);    //insert / 2 candies after eating
    }
    cout << candies_eaten;
    return 0;
}