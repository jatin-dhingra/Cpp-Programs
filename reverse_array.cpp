// JATIN DHINGRA
//VIT VELLORE
//CLASS OF 2023


#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int k{};k<n;k++)
  {
    cin>>arr[k];
  }
  cout<<"ENTERED ARRAY :";
  for(int i{};i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  int temp{};
  for(int i{0},j{n-1};i<j;i++,j--)
  {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

  }
  cout<<"REVERSED ARRAY: ";
  for(int i{};i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
