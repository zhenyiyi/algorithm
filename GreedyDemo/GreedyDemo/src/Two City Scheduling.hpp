//
//  Two City Scheduling.hpp
//  GreedyDemo
//
//  Created by fenglin on 2019/8/7.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Two_City_Scheduling_hpp
#define Two_City_Scheduling_hpp

#include <stdio.h>
#include <vector>
#include <cmath>
using namespace std;

class Solution_1029 {
public:
    
    static bool compare(vector<int>& nums1, vector<int>& nums2){
        return fabs(nums1.front()-nums1.back()) > fabs(nums2.front()-nums2.back());
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int result = 0;
        sort(costs.begin(), costs.end(), compare);
        int a = 0;
        int b = 0;
        for (int i=0; i<costs.size(); i++) {
            vector<int> nums = costs[i];
            // 第一个城市便宜
            if (nums[1] > nums[0]) {
                if (a < costs.size()/2) {
                    a ++;
                    result += nums[0];
                }else{
                    b ++;
                    result += nums[1];
                }
            }else{
                if (b < costs.size()/2) {
                    b ++;
                    result += nums[1];
                }else{
                    a ++;
                    result += nums[0];
                }
            }
        }
        return result;
    }
    void test();
};

/*
 
 */
#endif /* Two_City_Scheduling_hpp */
