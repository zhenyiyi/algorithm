//
//  Two Sum.hpp
//  HashTable
//
//  Created by fenglin on 2019/7/11.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Two_Sum_hpp
#define Two_Sum_hpp

#include <stdio.h>
/*
 1. 两数之和
 
 给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
 
 你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
 
 示例:
 
 给定 nums = [2, 7, 11, 15], target = 9
 
 因为 nums[0] + nums[1] = 2 + 7 = 9
 所以返回 [0, 1]
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/two-sum
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

#include <vector>
#include <unordered_map>
using namespace std;


class Solution_1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> dict;
        for (int i=0; i<nums.size(); i++) {
            int other = target - nums[i];
            unordered_map<int, int>::iterator it = dict.find(other);
            if (it != dict.end()) {
                res.push_back(it->second);
                res.push_back(i);
            }
            dict[nums[i]] = i;
        }
        return res;
    }
};

void test_two_sum();

#endif /* Two_Sum_hpp */
