#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]={1,-3,2,1,-1};
  int n=sizeof(arr)/sizeof(arr[0]);
  int sum{},maxsum{},ans{};
  for(int i{};i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      maxsum+=arr[i]+arr[j];
      ans=max(maxsum,ans);
    }
  }
  cout<<ans<<endl;
}
