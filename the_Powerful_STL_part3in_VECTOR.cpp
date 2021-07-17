#include <bits/stdc++.h>
using namespace std;

class Person
{
    friend std::ostream &operator<<(std::ostream &os,const Person &p);
    std::string name;
    int age;
public:
    Person()=default;
    Person(string name,int age):name{name},age{age}{};
    bool operator<(const Person &rhs)const{
        return this->age<rhs.age;
    }
    bool operator== (const Person &rhs) const {
        return (this->name==rhs.name && this->age==rhs.age);
    }
    
};

std::ostream &operator <<(std::ostream &os,const Person &p)
{
    os<<p.name<<":"<<p.age;
    return os;
}

void display2(vector<int>&vec)
{
    cout<<"[ ";
    for_each(vec.begin(),vec.end(),[](int x){cout<<x<<" ";});
    cout<<"]"<<endl;
}

template<typename T>
void display(vector<T>&vec)
{
    cout<<"[ ";
    for(auto &i:vec)
    {
        cout<<i<<" ";
    }
    cout<<"]";
    cout<<endl;
    
}

void test1()
{
    vector<int>v{1,2,3,4,5};
    vector<int>v1{10,20,30,40,50};
    display(v);
    display2(v1);
    vector<int>v2(10,20);
    display2(v2);
    
}

void test2(){
    cout<<"----------------------------------"<<endl;
    vector<int>x;
    x={1,2,3,4,5};
    cout<<x.size()<<endl;
    cout<<x.max_size()<<endl;
    cout<<x.capacity()<<endl;
    x.push_back(100);
    display(x);
    cout<<x.size()<<endl;
    cout<<x.max_size()<<endl;
    cout<<x.capacity()<<endl;
    
    cout<<"shrink to fit"<<endl;
    x.shrink_to_fit();
    cout<<x.size()<<endl;
    cout<<x.max_size()<<endl;
    cout<<x.capacity()<<endl;
    
}

void test3()
{
    cout<<"-------------------"<<endl;
    vector<Person>p;
    Person p1{"jatin",21};
    display(p);
    p.push_back(p1);
    display(p);
    p.push_back(Person{"xyz",21});
    display(p);
    p.emplace_back("jaam",1);
    display(p);
}

void test4()
{
    cout<<"-----------------------------"<<endl;
    vector<Person>S{
        {"jatin",21},
        {"zyz",21},
        {"jaam",1}
    };
    
    display(S);
    cout<<S.front()<<endl;
    cout<<S.back()<<endl;
    S.pop_back();
    display(S);
}

void test5()
{
    cout<<"-------------------------"<<endl;
    vector<int>v{1,2,3,4,5};
    display(v);
    v.erase(v.begin(),v.begin()+2);
    display(v);
    vector<int>V{1,2,3,4,5,6,7,8,9,10};
    auto x=V.begin();
    while(x!=V.end())
    {
        if(*x%2==0)
        {
            V.erase(x);
        }
        else{
            x++;
        }
    }
    display(V);
    
    
}

void test6()
{
    cout<<"------------------------"<<endl;
    vector<int>a{1,2,3,4,5};
    vector<int>b{2,4,6,8,10,12,14};
    display(a);
    display(b);
    a.swap(b);
    display(a);
    display(b);
}

void test7()
{
    cout<<"--------------------------"<<endl;
    vector<int>a{1,2,3,4,5};
    vector<int>b{2,4,56,28,33,12,14};
    sort(b.begin(),b.end());
    display(b);
    
}

void test8()
{
     vector<int>a{1,2,3,4,5};
    vector<int>b{2,4,5,7,10,12,14};
    display(a);
    display(b);
    copy(a.begin(),a.end(),back_inserter(b));
    display(a);
    display(b);
    
    copy_if(a.begin(),a.end(),back_inserter(b),[] (int x){return x%2==0;});
    display(a);
    display(b);
}

void test9()
{
    cout<<"----------------------"<<endl;
    vector<int>a{1,2,3,4,5};
    vector<int>b{5,10,15,20,25};
    vector<int>c;
    transform(a.begin(),a.end(),b.begin(),back_inserter(c),[] (int x,int y){return x*y;});
    display(c);
}

void test10()
{
    cout<<"------------------------"<<endl;
    vector<int>a{1,2,3,4,5};
    vector<int>b{10,20,30,40,50};
    auto x=find(a.begin(),a.end(),4);
    if(x!=a.end())
    {
        a.insert(x,b.begin(),b.end());
        
    }
    display(a);
    
    
    
}

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    
}
