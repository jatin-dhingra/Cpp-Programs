KADANE ALGORITHM


/*
CODE BY :-

jjjjjjjjj    aaaa       ttttttt    iiiiiii   nnn    nn
   jj       aa  aa        tt         ii      nn nn  nn
   jj      aaaaaaaa       tt         ii      nn  nn nn
 jjjj     aa      aa      tt       iiiiiii   nn     nn

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define l long int
#define MOD 1000000007
#define vi vector<int>
#define vll vector<long long int>
#define vs vector<string>
#define vb vector<bool>
#define sr(v) sort(v.begin(),v.end());
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repr(i,a,n) for(int i=n;i>=a;i--)
#define all(a) a.begin(),a.end()
#define rall(a) a.begin(),a.end()
#define pb push_back



int main()
{
  vi v ={1,-3,2,1,-1};
  int ans=INT_MIN;
  int a{};
  for(int i:v)
  {
    a+=i;
    ans=max(ans,a);
    a=max(a,0);
  }
  cout<<ans;
}
