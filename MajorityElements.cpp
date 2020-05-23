#include<bits/stdc++.h>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int retNum = -1;
        unordered_map<int,int> hmap;
        for(auto num : nums)
        {
            hmap[num]++;
        }
        for(auto num : nums)
        {
            if(hmap[num] > (nums.size()/2))
            {
                retNum = num;
                return retNum;
            }
        }
        return retNum;
    }
};