#include<bits/stdc++.h>

class Solution {
public:
    int findComplement(int num) {
        int ans = 0;
        long long base = 1;
        int rem = 0;
        if(num == 1)
        {
            return 0;
        }
        if(num >1)
        {  
            while(num != 0)
            {
                rem = num%2 ? 0 : 1;
                num = num/2;
                ans += rem*base;
                base = base *2;
            }
        }
       return ans; 
    }
};