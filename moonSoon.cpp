//  codechef -contest

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        

   long long n,m,h;
   cin>>n>>m>>h;

   long long int A[n],B[m];
   int c1=0,c2=0,co=0,c3=0;
   for(int i=0;i<n;i++)
   cin>>A[i];
   for(int i=0;i<m;i++)
   cin>>B[i];

   sort(A,A+n,greater<long long>());
   sort(B,B+m,greater<long long>());
   long long ans=0;
   for(int i=0;i<min(m,n);i++)
   {
      ans+=min(A[i],B[i]*h);
   }
   
   
   cout<<ans<<endl;

    }}