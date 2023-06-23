// codechef contest 
// find the way in which programs will open when we press alt tab after opening multiple files or programs
// so while printing them only output last 2 characters 

#include <bits/stdc++.h>
using namespace std;

int main() {
	   int n;
	   cin >> n;
	   cin.ignore();
       map<string,int> m;
	  
	   for(int i = 0 ; i < n; i++) {
	       	string st;
	        cin >> st;
	        m[st] = i;
	   }
	   map<int,string> m2;
	   
	   for(auto &it : m) {
	       m2[it.second] = it.first;
	   }

	   for(auto it = m2.rbegin(); it != m2.rend(); it++) {
	       cout << it->second.substr(it->second.length()-2,2) << "";
	   }
	
	return 0;
}
