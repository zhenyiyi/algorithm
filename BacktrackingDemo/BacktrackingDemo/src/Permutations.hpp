//
//  Permutations.hpp
//  BacktrackingDemo
//
//  Created by 张枫林 on 2019/8/8.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Permutations_hpp
#define Permutations_hpp
/*
 给定一个没有重复数字的序列，返回其所有可能的全排列。
 
 示例:
 
 输入: [1,2,3]
 输出:
 [
 [1,2,3],
 [1,3,2],
 [2,1,3],
 [2,3,1],
 [3,1,2],
 [3,2,1]
 ]
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/permutations
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

class Solution_46 {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.size() == 0) {
            return {};
        }
        vector<vector<int>> result;
        backtrack(nums, result, 0);
        return result;
    }
    /*
     * 第一个整数的索引作为参数
     * 如果第一个整数有索引 n，意味着当前排列已完成。
     * 遍历索引 first 到索引 n - 1 的所有整数。
     
        先交换
     
        在回溯
     *
     */
    void backtrack(vector<int>& nums, vector<vector<int>>& res, int first){
        if (first == nums.size()) {
            res.push_back(nums);
        }
        for (int i=first; i<nums.size(); i++) {
            swap(nums[i], nums[first]);
            //依次加一，递归到底，然后回退
            backtrack(nums, res, first+1);
            swap(nums[i], nums[first]);
        }
    }
    
    void swap(int &val1, int &val2){
        int temp = val1;
        val1 = val2;
        val2 = temp;
    }
    
};


#endif /* Permutations_hpp */
