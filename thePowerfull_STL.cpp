#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <list>
using namespace std;

class Person{
    string name;
    int age;
public:
    Person()=default;
    Person(string name,int age)
    :name{name},age{age}{}
    bool operator<(const Person &rhs)const{
        return this->age<rhs.age;
    }
    bool operator==(const Person &rhs)const{
        return (this->name==rhs.name && this->age==rhs.age);
    }
};


void find_test()
{
    vector<int>num{1,2,3,4,5};
    
    auto n=find(num.begin(),num.end(),2);
    if(n!=num.end()){
        cout<<"number found "<<*n<<" at index number "<<num.at(*n)<<endl;
    }
    else{
        cout<<"cant find the number";
    }
}


void find_test2()
{
        list<Person>player
        {
            {"jatin",23},
            {"himal",22},
            {"ashwin",25}
        };
        auto itrr=find(player.begin(),player.end(),Person{"himal",22});
        if(itrr!=player.end())
        {
            cout<<"person found"<<endl;
        }
        else{
            cout<<"not found!";
        }
}

void count_test()
{
    int num{};
    cin>>num;
    vector<int>number{1,2,3,4,5,4,3,2,2,2,3};
    int countt{};
    countt=count(number.begin(),number.end(),num);
    cout<<"number of count of digit "<<num<<" is "<<countt<<endl;
}

void countif_test()
{
    vector<int>nums{1,2,3,4,5,6,7,89,98,66};
    int c{};
    c=count_if(nums.begin(),nums.end(),[](int x){return x%2==0;});
    
    cout<<"total number of odd numbers in given vector is "<<c<<endl;
    
}

void greater_test(){
    vector<int>nums{1,2,3,4,5,6,7,89,98,66};
    int greater{};
    greater=count_if(nums.begin(),nums.end(),[] (int x){return x>=5;});
    cout<<greater;
    
}
void replace_test()
{
    vector<int>nums{1,2,3,2,1,1,14,5,6,1};
    for(auto i:nums)
    {
        cout<<i<<" ";
    }cout<<endl;
    replace(nums.begin(),nums.end(),1,10);
    for(auto i:nums)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    
}

void all_of()
{
    vector<int>nums{1,2,3,4,5,6,13,15,6};
    if(all_of(nums.begin(),nums.end(),[](int x){return x>10;}));
        cout<<"yes all of them are greater than 10"<<endl;
    else
        cout<<"condition not true "<<endl;
    
    
    if(all_of(nums.begin(),nums.end(),[](int x){return x<20;}));
    {
        cout<<"yes all of them are less than than 20"<<endl;
    }
    else
    {
        cout<<"condition not true "<<endl;
    }
}
void transform()
{
    string name{"jatin dhingra"};
    cout<<"before: "<<name<<endl;
    transform(name.begin(),name.end(),name.begin(),::toupper);
    cout<<"after: "<<name;
}

int main(){
    find_test();
    find_test2();
    count_test(); 
    countif_test();
    greater_test();
    replace_test();
    all_of();
    transform();
    
}
