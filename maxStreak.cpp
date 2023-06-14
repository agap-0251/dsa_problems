// codechef contest 94 problem
// om and addy maintains streak , so find who has max streak

#include <bits/stdc++.h>
using namespace std;

int countMax(vector<int> &v) {
    int maxEnd = 0,maxSoFar = 0;
    for(int i = 0; i<v.size();i++) {
        if(v[i] == 0) {
            maxEnd = 0;
        }
        else {
        ++maxEnd;
        }
        maxSoFar = max(maxEnd,maxSoFar);
    }
    return maxSoFar;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,n,om,x,ad;
	cin >> t;
	while(t--) {
	    cin >> n;
	    vector<int> a,b;
	    a.reserve(n);
	    b.reserve(n);
	    for(int i = 0; i<n;i++) {
	        cin >> x;
	        a.emplace_back(x);
	    }
	    for(int i = 0; i<n;i++) {
	        cin >> x;
	        b.emplace_back(x);
	    }
	    om = countMax(a);
	    ad = countMax(b);
	    if(om > ad) {
	        cout << "OM\n";
	    }
	    else if(om < ad) {
	        cout << "ADDY\n";
	    }
	    else {
	        cout << "DRAW\n";
	    }
	    
	}
	return 0;
}
