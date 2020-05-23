#include<bits/stdc++.h>

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> hmap;
        for(auto c:s)
        {
            hmap[c]++;            
        }
        int index = -1;
        for(auto i =0;i<s.length();i++)
        {
            if(hmap[s[i]] == 1)
            {   
                index = i;
                return index;
            }
        }
        return index;
    }
};