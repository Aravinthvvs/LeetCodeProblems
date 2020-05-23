#include<bits/stdc++.h>

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> hmap,hmap1;
        
        for(auto c:ransomNote)
        {
            hmap[c]++;
        }
        for(auto c :magazine)
        {
            hmap[c]--;
        }
        for(auto itr = hmap.begin();itr!= hmap.end();itr++)
        {
            if(itr->second > 0)
            {
                return false;
            }
        }
        return true;
    }
};