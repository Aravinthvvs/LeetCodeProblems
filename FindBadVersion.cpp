// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#include<bits/stdc++.h>

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int h = n;
        
        
        while(l<h)
        {
            int mid = l+((h-l)/2);
            
            if(isBadVersion(mid) == true) //isBadVersion is already implemented in Problem
            {
                h = mid;
            }
            else
            {
                l = mid+1;
            }
            
        }
        return l;
    }
};