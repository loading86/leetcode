#include <iostream>
using namespace std;

int Atoi(const string& s)
{
    int ret = 0;
    bool started = false;
    int flag = 1;
    for(auto c : s)
    {
        if(started && (c < '0' || c > '9'))
        {
            return 0;
        }
        if(c == ' ')
        {
            continue;
        }
        if(c == '-')
        {
            flag = -1;
            started = true;
            continue;
            
        }else if(c == '+')
        {
            started = true;
            continue;
        }
        ret = ret * 10 + c - '0';
        started = true;
    }
    return flag * ret;
}

int main()
{
    cout<<Atoi("123")<<endl;
    cout<<Atoi("++123")<<endl;
    cout<<Atoi("   -1 23")<<endl;
    return 0;
}
