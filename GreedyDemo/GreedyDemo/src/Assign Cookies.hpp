//
//  Assign Cookies.hpp
//  GreedyDemo
//
//  Created by fenglin on 2019/8/7.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Assign_Cookies_hpp
#define Assign_Cookies_hpp

#include <stdio.h>
#include <vector>

using namespace std;

class Solution_443 {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int j = 0;
        vector<int> results;
        for (int i=0; i<g.size(); i++) {
            while (j < s.size() && g[i] > s[j]) {
                j++;
            }
            if (j < s.size() && g[i] <= s[j]) {
                results.push_back(g[i]);
                j++;
            }
            
        }
        return (int)results.size();
    }
    
    int findContentChildrenV2(vector<int>& g, vector<int>& s) {
        int count = 0;
        int gi = 0, si = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while(gi < g.size() && si < s.size()) {
            if(s[si] >= g[gi]) {
                count += 1;
                si+=1;
                gi+=1;
            }
            else if(s[si] < g[gi]) {
                si+=1;
            }
        }
        return count;
    }
    
    void test();
};

#endif /* Assign_Cookies_hpp */
