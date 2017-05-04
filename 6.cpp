#include <iostream>

using namespace std;

string convert(const string& s, int rows)
{
    string ret(s.size(),' ');
    cout<<"size:"<<s.size()<<endl;
    int index = 0;
    for(int j = 0; j < rows; ++j)
    {
        for(int i = 0;;++i)
        {
            if(!(i == 0 || j == 0 || j == rows - 1))
            {
                int sub = -j+(2*rows-2)*i;
                cout<<"sub:"<<sub<<endl;
                if(sub < s.size())
                {
                    ret[index++] = s[sub];
                    cout<<s[sub]<<","<<index<<endl;
                    cout<<"ret:"<<ret<<endl;
                    if(index == s.size())
                    {
                        return ret;
                    }
                }else
                {
                    break;
                }
            }
            int main = j+(2*rows-2)*i;
            cout<<"main:"<<main<<endl;
            if(main < s.size())
            {
                ret[index++] = s[main];
                cout<<s[main]<<","<<index<<endl;
                cout<<"ret:"<<ret<<endl;
                if(index == s.size())
                {
                    return ret;
                }
            }else
            {
                break;
            }
        }
    }
}

int main()
{
    string x = "a";
    string y = "b";
    y.reserve(1);
    y[0] = x[0];
    cout<<"y:"<<y<<endl;
    cout<<convert("PAYPALISHIRING",3)<<endl;
    return 0;
}
