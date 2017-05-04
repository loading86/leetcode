#include <iostream>
using namespace std;


string LongestPalindromicStr(const string& s)
{
    int start  = 0;
    int end = 0;
    int curr_len = 1;
    int max_len = 1;
    int max_start = 0;
    int max_end = 0;
    for(int i = 0; i < s.size(); ++i)
    {
        cout<<"i:"<<i<<endl;
        for(int c = i; c <= i+1; ++c)
        {
            start = i;
            end = c;
            while(start >= 0 && end <= s.size() - 1)
            {
                if(s[start] == s[end])
                {
                    cout<<"equal:"<<start<<","<<end<<endl;
                    curr_len = end - start + 1;
                    cout<<"cur:"<<curr_len<<",max:"<<max_len<<endl;
                    if(curr_len > max_len)
                    {
                        max_len = curr_len;
                        max_start = start;
                        max_end = end;
                    }
                    start--;
                    end++;
                }else
                {
                    break;
                }
            }
        }
        cout<<max_start<<","<<max_end<<","<<max_len<<endl;
    }
    return s.substr(max_start, max_len);
}

int main()
{
    string palinstr = LongestPalindromicStr("babad");
    cout<<palinstr<<endl;
    return 1;
}
