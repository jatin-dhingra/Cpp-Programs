//JATIN DHINGRA
//VIT VELLORE
//CLASS OF 2023

//THIS PROGRAM TELLS US THE WHETHER THE INSERTED ARRAY IS SORTED OR NOT

#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n){
  for(int i{};i<n-1;i++)
  {
    if(arr[i]>arr[i+1])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i{};i<n;i++)
  {
    cin>>arr[i];
  }
  if(sorted(arr,n))
  {
    cout<<"YES, array is sorted"<<endl;
  }
  else
  {
    cout<<"NO, array is not sorted"<<endl;
  }

}
