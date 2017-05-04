#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int AddTowNums(const list<int>& num_list1, const list<int>& num_list2, list<int>& num_list3)
{
    int num1 = 0;
    int num2 = 0;
    for_each(num_list1.rbegin(), num_list1.rend(), [&](const int& val)->void{num1 = num1*10 + val; });
    for_each(num_list2.rbegin(), num_list2.rend(), [&](const int& val)->void{num2 = num2*10 + val; });
    int sum = num1 + num2;
    while(sum > 0)
    {
        num_list3.push_back(sum%10);
        sum /= 10; 
    }
    return 1;
}

int main()
{
    list<int> num_list1, num_list2, num_list3;
    num_list1.push_back(2);
    num_list1.push_back(4);
    num_list1.push_back(3);
    num_list2.push_back(5);
    num_list2.push_back(6);
    num_list2.push_back(4);
    AddTowNums(num_list1, num_list2, num_list3);
    for(auto i: num_list3)
    {
        cout<<i<<endl;
    }
    return 1;
}
