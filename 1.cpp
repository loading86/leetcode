#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int TwoSum(const vector<int>& lst, int sum, int& num1, int& num2)
{
    unordered_map<int, int> hashes;
    int num = lst.size();
    for(int i = 0; i < num; ++i)
    {
        if(hashes.find(sum - lst[i]) != hashes.end())
        {
            num1 = hashes[sum - lst[i]];
            num2 = i;
            return 0;
        }
        hashes[lst[i]] = i;   
    }
    return -1;
}

int main()
{
    vector<int> nums = {1,5,7,9};
    int num1,num2;
    int ret = TwoSum(nums, 12, num1, num2);
    if(ret == -1)
    {
        cout<<"can not find!"<<endl;
    }
    cout<<"result:"<<num1<<","<<num2<<endl;
    return 0;
}
