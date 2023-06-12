// codechef 1vs1 question
// a - number of weeds you can pick per minute from garden
// b - number of weeds in garden
// c - time taken to pick all weeds in garden
// a divides b
// constraint - you should complete in exactly 'c' minutes not earlier, so how many minutes you should wait. 

#include<iostream>
using namespace std;

int main(void) {
    int t,a,b,c;
    cin >> t;
    while(t--) {
        cin >> b >> a >> c;
        if(c > (b/a))
            cout << (c - (b/a)) << "\n";
        else 
            cout << "0\n";
    }
}