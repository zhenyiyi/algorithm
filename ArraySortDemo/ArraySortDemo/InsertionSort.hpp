//
//  InsertionSort.hpp
//  ArraySortDemo
//
//  Created by 张枫林 on 2019/7/22.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef InsertionSort_hpp
#define InsertionSort_hpp

#include <stdio.h>
#include <vector>

using namespace std;

class InsertionSort {
    
public:
    /*
     * 未排序区间 和 已排序区间，从未排序区间找到一个元素
     */
    void insertionSort(vector<int> &nums){
        if (nums.size()<=1) {
            return;
        }
        for (int i=1; i<nums.size(); i++) {
            // 要插入的元素
            int value = nums[i];
            int j = i - 1;
            for (; j>=0; j--) {
                if (nums[j] > value) {
                    nums[j+1] = nums[j];
                }else{
                    // 已经找到要插入的地方了，
                    break;
                }
            }
            //
            nums[j+1] = value;
        }
    }
};

void testArrayInsertionSort();


#endif /* InsertionSort_hpp */
