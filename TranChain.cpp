// codechef contest
// blood donation , x -> y implies blood type x person can donate to y
// a -> a, ab
// b -> b,ab
//ab -> ab
//o -> a,b,ab
// print Max length of chain of people who can donate to others in a given set of people



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	string s;
	cin >> t;
	while(t--) {
	  cin >> n;
	  cin.ignore();
	  map<string,int> m;
	  vector<int> v;
	  for(int i = 0; i < n;i++){
	      cin >> s;
	      if(s == "A" || s == "AB" || s == "O") {
	          ++m["A"];
	      }
	      if(s == "B" || s == "AB" || s == "O") {
	          ++m["B"];
	      }
	      if(s == "AB" || s == "O") {
	          ++m["AB"];
	      }
	      
	  }
	  
	  for(auto itr = m.begin(); itr != m.end();itr++){
	      v.emplace_back(itr->second);
 	      
	  }
	  
	  cout << *max_element(v.begin(),v.end()) << "\n";
	  
	}
	return 0;
}
