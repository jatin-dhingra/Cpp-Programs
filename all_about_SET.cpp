#include <bits/stdc++.h>
using namespace std;


void display(set<int>s)
{
    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;
}


void displayy(set<string>s)
{
    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;
}

int main()
{
    set<int>s{2,3,5,6,1,4};
    display(s);
    
    s={1,3,5,6,7,8,8,8,4,3,3};
    display(s);
    auto it=s.find(4);
    if(it!=s.end())
    {
        cout<<*it;
    }
    
    set<string>s1{"A","B","C"};
    displayy(s1);
    s1.insert("D");
    displayy(s1);
    auto res=s1.insert("E");
    displayy(s1);
    cout<<*(res.first)<<" "<<res.second; 
    res=s1.insert("A");
    cout<<endl;
    cout<<*(res.first)<<" "<<res.second; 
    
    
}
