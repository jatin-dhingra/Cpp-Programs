#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  int brr[n];
  for(int i=1;i<=n;i++)
  {
    cin>>arr[i];
    brr[i]=brr[i-1]+arr[i];
  }
  int q{};
  cin>>q;
  while(q--)
  {
    int l,r;
    cin>>l>>r;
    cout<<brr[r]-brr[l-1];
  }
}
