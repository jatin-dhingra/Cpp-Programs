//JATIN DHINGRA
//VIT VELLORE
//CLASS OF 2023
//THIS CODE BELONG TO JATIN DHINGRA

#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int brr[],int crr[],int n,int m)
{
  int i{},j{},k{};
  int s=n+m;
  while(i<n && j<m)
  {
    if(arr[i]<brr[j])
    {
      crr[k++]=arr[i++];
    }
    else
    {
      crr[k++]=brr[j++];
    }
  }
  for(;i<n;i++)
  {
    crr[k++]=arr[i];
  }
  for(;j<m;j++)
  {
    crr[k++]=brr[j];
  }
  for(int l{};l<s;l++)
  {
    cout<<crr[l]<<' ';
  }

}

int main()
{
  int n,m;
  cin>>n>>m;
  int arr[n],brr[m];
  int crr[n+m];
  for(int i{};i<n;i++)
  {
    cin>>arr[i];
  }
  for(int j{};j<m;j++){
    cin>>brr[j];
  }
  sort(arr,arr+n);
  sort(brr,brr+m);
  merge(arr,brr,crr,n,m);



}
