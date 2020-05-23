#include<bits/stdc++.h>

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        vector<char> jewels;
        int counter = 0;
        vector<char> :: iterator itr;
        for(auto c: J)
        {
            jewels.push_back(c);
        }
        for(int i=0;i< S.length();i++)
        {
            itr = find(jewels.begin(),jewels.end(),S[i]) ;
            if( itr != jewels.end())
            {
                counter++;
            }
        }
        return counter;
    }
};