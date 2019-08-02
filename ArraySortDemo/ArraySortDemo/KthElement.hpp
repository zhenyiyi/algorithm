//
//  KthElement.hpp
//  ArraySortDemo
//
//  Created by fenglin on 2019/7/22.
//  Copyright © 2019 quanshi. All rights reserved.
//

// https://www.cnblogs.com/wangkundentisy/p/8810077.html

/*
 在未排序的数组中找到第 k 个最大的元素。请注意，你需要找的是数组排序后的第 k 个最大的元素，而不是第 k 个不同的元素。
 
 示例 1:
 
 输入: [3,2,1,5,6,4] 和 k = 2
 输出: 5
 示例 2:
 
 输入: [3,2,3,1,2,4,5,5,6] 和 k = 4
 输出: 4
 说明:
 
 你可以假设 k 总是有效的，且 1 ≤ k ≤ 数组的长度。
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/kth-largest-element-in-an-array
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#ifndef KthElement_hpp
#define KthElement_hpp

#include <stdio.h>
#include <vector>
using namespace std;

class KthElement {
    
public:
    int kthBiggest(vector<int> &nums, int k){
        if (nums.size() < k) {
            printf("kthBiggest error");
            return -1;
        }
        int left = 0;
        int right = (int)nums.size()-1;
        int pos = partition(nums, left, right);
        int index = (int)nums.size() - k;
        // 第 k 大元素 符合这个条件
        while (pos != index) {
            if (pos > index) {
                right = pos - 1;
                pos = partition(nums, left, right);
            }else{
                left = pos +1;
                pos = partition(nums, left, right);
            }
        }
        return nums[pos];
    }
    void swap(vector<int> &nums, int index1, int index2){
        if (index1 >= nums.size()  || index2 >= nums.size() || index1 == index2 ) {
            return;
        }
        int temp = nums[index1];
        nums[index1] = nums[index2];
        nums[index2] = temp;
    }
    int partition(vector<int> &nums, int left, int right){
        int pivot = nums[right];
        int start = left;
        for (int j =start; j<right; j++) {
            if (nums[j] < pivot) {
                swap(nums, start, j);
                start++;
            }
        }
        // swap 最后一个值 和中间的值
        swap(nums, start, right);
        return start;
    }
};

void testKthBiggest();

#endif /* KthElement_hpp */


