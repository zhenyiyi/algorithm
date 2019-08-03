//
//  Three Sum.hpp
//  HashTable
//
//  Created by fenglin on 2019/7/11.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Three_Sum_hpp
#define Three_Sum_hpp

/*
 三数之和
 
 给定一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？找出所有满足条件且不重复的三元组。
 
 注意：答案中不可以包含重复的三元组。
 
 例如, 给定数组 nums = [-1, 0, 1, 2, -1, -4]，
 
 满足要求的三元组集合为：
 [
 [-1, 0, 1],
 [-1, -1, 2]
 ]
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/3sum
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include <stdio.h>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution_12 {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // 首先排序
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        unordered_map<int, vector<int>> dict;
        unordered_map<int, vector<int>>::iterator it;
        for (int i=0; i<nums.size()-2; i++) {
            for (int j=i+1; j<nums.size()-1; j++) {
                if ((it = dict.find(nums[j])) != dict.end()) {
                    vector<int> vec = it->second;
                    vec.push_back(nums[j]);
                    res.push_back(vec);
                }else{
                    int k = -(nums[i] + nums[j]);
                    vector<int> vec = {nums[i], nums[j]};
                    dict[k] = vec;
                }
            }
        }
        return res;
    }
};

void test_three_sum();
#endif /* Three_Sum_hpp */
