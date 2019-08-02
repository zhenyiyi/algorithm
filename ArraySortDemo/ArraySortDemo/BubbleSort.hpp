//
//  BubbleSort.hpp
//  ArraySortDemo
//
//  Created by fenglin on 2019/7/18.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef BubbleSort_hpp
#define BubbleSort_hpp

#include <stdio.h>
#include <vector>

using namespace std;

class ArraySort {
    
public:
    void sort(vector<int> &nums){
        for (int i=0; i<nums.size(); i++) {
            bool changeFlag = false;
            for (int j=0; j<nums.size()-i-1; j++) {
                if (nums[j] > nums[j+1]) {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    changeFlag = true;
                }
            }
            if (!changeFlag) {
                break;
            }
        }
    }
};

void testArraySort();

#endif /* BubbleSort_hpp */
