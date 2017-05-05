#include <iostream>
using namespace std;

int Reverse(int num)
{
    int flag = 1;
    if(num < 0)
    {
        flag = -1;
        num = 0 - num;
    }
    int ret = 0;
    while(num > 0)
    {
        ret = ret * 10 + num % 10;
        num /= 10;
    }
    return flag * ret;
}

int main()
{
    cout<<Reverse(123)<<endl;
    cout<<Reverse(-123)<<endl;
    return 1;
}
