//
//  QuickSort.hpp
//  ArraySortDemo
//
//  Created by fenglin on 2019/7/22.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef QuickSort_hpp
#define QuickSort_hpp

#include <stdio.h>
#include <vector>
using namespace std;

class QuickSort {
    
public:
    void sort(vector<int> &nums){
        if (nums.size() <= 1) {
            return;
        }
        sortInternaly(nums, 0, (int)nums.size()-1);
    }
    
    void sortInternaly(vector<int> &nums, int left, int right){
        if (left >= right) {
            return;
        }
        
        int q = partition(nums, left, right);
        sortInternaly(nums, left, q-1);
        sortInternaly(nums, q+1, right);
    }
    
    int partition(vector<int> &nums, int left, int right){
        int pivot = nums[right];
        int start = left;
        for (int j =start; j<right; j++) {
            if (nums[j] < pivot) {
                if (start == j) {
                    start ++;
                }else{
                    // swap
                    int temp = nums[start];
                    nums[start] = nums[j];
                    nums[j] = temp;
                    start++;
                }
            }
        }
        // swap 最后一个值 和中间的值
        int temp = nums[start];
        nums[start] = pivot;
        nums[right] = temp;
        return start;
    }
};

void testQuickSort();
#endif /* QuickSort_hpp */
