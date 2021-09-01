#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int arr[N][N];
long long brr[N][N];
int main()
{
  int n;
  cin>>n;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;i++){
      cin>>arr[i][j];
      brr[i][j]=arr[i][j]+brr[i-1][j]+brr[i][j-1]-brr[i-1][j-1];
    }
  }
  int q{};
  cin>>q;
  while(q--)
  {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<brr[c][d]-brr[a-1][d]-brr[c][b-1]+brr[a-1][b-1];
  }
}
