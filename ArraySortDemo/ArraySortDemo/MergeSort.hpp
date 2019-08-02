//
//  MergeSort.hpp
//  ArraySortDemo
//
//  Created by fenglin on 2019/7/22.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef MergeSort_hpp
#define MergeSort_hpp

#include <stdio.h>
#include <vector>
using namespace std;


class MergeSort {
    
public:
    void sort(vector<int> &nums){
        if (nums.size() <= 1) {
            return;
        }
        sortImp(nums, 0, (int)nums.size()-1);
    }
    
    void sortImp(vector<int>&nums ,int left ,int right){
        if (left >= right) {
            return;
        }
        int mid = (left + right) /2;
        sortImp(nums, left, mid);
        sortImp(nums, mid+1, right);
        merge(nums, left, mid, right);
    }
    // 4, 5, 6, 3, 2, 1
    void  merge(vector<int> &nums, int left, int mid, int right){
        int i = left;
        int j = mid + 1;
        vector<int> tempArr;
        while (i <= mid && j <= right) {
            if (nums[i] < nums[j]) {
                tempArr.push_back(nums[i]);
                i ++;
            }else{
                tempArr.push_back(nums[j]);
                j ++;
            }
        }
        int start = i ;
        int end = mid;
        if (j <= right) {
            start = j ;
            end  = right;
        }
        while (start <= end) {
            tempArr.push_back(nums[start]);
            start++;
        }
        
        for (int i=0; i<=right-left; ++i) {
            nums[left + i] = tempArr[i];
        }
    }
    
    void mergeBySentry(vector<int> &nums, int left, int mid, int right){
        
    }
    
};

void testMergeSort();

#endif /* MergeSort_hpp */
