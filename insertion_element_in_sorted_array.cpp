//JATIN DHINGRA
//VIT VELLORE
//CLASS OF 2023

//THIS CODE GIVE US THE IDEA OF HOW TO INSERT THE DESIRED ELEMENT WHEN THE ARRAY IS SORTED



#include <bits/stdc++.h>
using namespace std;
int main()

{
  int n;
  cin>>n;
  int arr[n+1];
  for(int i{};i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  int x;
  cout<<"Enter the number to be inserted : ";
  cin>>x;
  int i{n-1};
  while(arr[i]>x)
  {
    arr[i+1]=arr[i];
    i--;
  }
  arr[i+1]=x;
  cout<<"Sorted array with inserted element : ";
  for(int i{};i<n+1;i++)
  {
    cout<<arr[i]<<" ";
  }


}
