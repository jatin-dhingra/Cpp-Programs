//SIMPLEST PROGRAM TO CHECK THE GIVEN TWO STRING ARE ANAGRAM OR NOT 
// WITH COMPLEXITIES O(n);
//where n is the size of the two string


#include <bits/stdc++.h>
using namespace std;
int main()
{
  cout<<"Program to check the anagram "<<endl;
  string a,b;
  int hash[26]{0};
  cin>>a>>b;
  if(a.size()!=b.size())
  {
    cout<<"Not an anagram"<<endl;
  }
  else
  {
    for(int i{};i<a.size();i++)
    {
      hash[int(a[i])-97]++;
    }
    for(int i{};i<b.size();i++){
      hash[int(b[i])-97]--;
    }
    bool ans=true;
    for(int i{};i<26;i++){
      if(hash[i]<0)
      {
        ans=false;
        break;
      }
      else
      {
        ans=true;
      }
    }
    if(ans)
    {
      cout<<"Anagram"<<endl;
    }
    else{
      cout<<"Not an anagram"<<endl;
    }
  }

}
