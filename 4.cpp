#include <iostream>
#include <vector>
using namespace std;

int MidVal(const vector<int>& lst1, const vector<int>& lst2)
{
    int m = lst1.size();
    int n = lst2.size();
    int i = 0;
    int j = 0;
    int mid = 0;
    int count = (m+n)/2 + (m+n)%2;
    for(int c = 0; c < count; ++c)
    {
        if( lst1[i] <= lst2[j])
        {
            mid = lst1[i];
            ++i;
        }else
        {
            mid = lst2[j];
            ++j;
        }
    }
    return mid;
}

int main()
{
    vector<int> lst1 = {1,3,5,7};
    vector<int> lst2 = {2,4,6,8};
    int mid = MidVal(lst1, lst2);
    cout<<mid<<endl;
    return 1;
}
