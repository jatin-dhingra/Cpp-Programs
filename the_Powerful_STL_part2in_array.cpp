#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <array>
#include <numeric>
using namespace std;
display(std::array<int,5>nums)
{
    for(auto &i:nums)
    {
        cout<<i<<" "; 
    }cout<<endl;
        
}

void test1()
{
    std::array<int,5>nums{1,2,3,4,5};
    std::array<int,5>nums2;
    display(nums);
    display(nums2);
    nums2={1,3,5,7,9};
    display(nums);
    display(nums2);
    cout<<nums[2]<<endl;
    cout<<nums2[2]<<endl;
    cout<<nums.size()<<endl;
    cout<<nums2.size()<<endl;
    nums[1]=69;
    display(nums);
    cout<<nums.front()<<endl;
    cout<<nums2.back()<<endl;
    cout<<"--------------------------"<<endl;
}
void test2()
{
    std::array<int,5>num{1,2,3,4,5};
    std::array<int,5>num2{1,3,5,7,9};
    display(num);
    display(num2);
    num.swap(num2);
    cout<<"Afer swapping "<<endl;
    display(num);
    display(num2);
    cout<<"--------------------------"<<endl;
}
void test3()
{
     std::array<int,5>num{1,2,3,4,5};
     int *ptr=num.data();
     cout<<ptr<<endl;
     *ptr=89;
     display(num);
     cout<<"--------------------------"<<endl;
     
}
void test4()
{
    std::array<int,5>num{1,2,3,4,5};
    int *ptr=num.data();
    *ptr=11;
    cout<<"Min: "<<*min_element(num.begin(),num.end())<<endl;
    cout<<"Max: "<<*max_element(num.begin(),num.end())<<endl;
    cout<<"--------------------------"<<endl;
}

void test5()
{
    std::array<int,5>num{2,45,64,67,4};
    display(num);
    sort(num.begin(),num.end());
    display(num);
    cout<<"--------------------------"<<endl;
}

void test6()
{
    std::array<int,5>num{2,45,64,64,4};
    auto itrr=adjacent_find(num.begin(),num.end());
    if(itrr!=num.end())
    {
        cout<<"adjacent element found: "<<*itrr<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    cout<<"--------------------------"<<endl;
}

void test7(){
    std::array<int,5>num{2,45,64,64,4};
    int sum{};
    sum=accumulate(num.begin(),num.end(),0);
    cout<<"the sum of thegiven array is "<<sum<<endl;
    cout<<"--------------------------"<<endl;
}

void test8()
{
    std::array<int,12>num{2,7,4,4,5,6,7,7,7,7,7,4};
    int countt{};
    countt=count(num.begin(),num.end(),7);
    cout<<"the count of digit 7 in the array is "<<countt<<endl;
    cout<<"--------------------------"<<endl;
}

void test9()
{
    std::array<int,10>num{1,45,666,676,433,111,222,322,433,399};
    int countt{};
    countt=count_if(num.begin(),num.end(),[](int x){return x>=100 && x<=400;});
    cout<<"number between 100 and 400 in the array is "<<countt<<endl;
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
    
}

