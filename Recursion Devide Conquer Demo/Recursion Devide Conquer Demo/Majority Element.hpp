//
//  Majority Element.hpp
//  Recursion Devide Conquer Demo
//
//  Created by fenglin on 2019/7/15.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Majority_Element_hpp
#define Majority_Element_hpp

#include <stdio.h>
/*
 给定一个大小为 n 的数组，找到其中的众数。众数是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。
 
 你可以假设数组是非空的，并且给定的数组总是存在众数。
 
 示例 1:
 
 输入: [3,2,3]
 输出: 3
 示例 2:
 
 输入: [2,2,1,1,1,2,2]
 输出: 2
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/majority-element
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

#include <unordered_map>
#include <vector>
using namespace std;

class Solution_169 {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> dict;
        for (auto num : nums) {
            dict[num] +=1;
            if (dict[num] > nums.size() / 2) {
                return num;
            }
        }
        return -1;
    }
};


#endif /* Majority_Element_hpp */
