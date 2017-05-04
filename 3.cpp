#include <iostream>
#include <unordered_map>
using namespace std;
int LongestSubStr(const string& raw)
{
    unordered_map<char, int> hashes;
    int size = raw.size();
    int start = 0;
    hashes[raw[0]] = 0;
    int end = 1;
    int max_len = 1;
    int curr_len = 1;
    for(;end < size; ++end)
    {
        auto it = hashes.find(raw[end]);
        if(it == hashes.end() || it->second < start)
        {
            hashes[raw[end]] = end;
            curr_len = curr_len + 1;
            if(curr_len > max_len)
            {
                max_len = curr_len;
            }
        }else
        {
            start = it->second + 1;
            hashes[raw[end]] = end;
            curr_len = end - start + 1;
        }
    }
    return max_len;
}

int main()
{
    string raw = "pwwkew";
    int len = LongestSubStr(raw);
    cout<<len<<endl;
    return 1;
}
