//
//  KthBiggestElement.hpp
//  ArraySortDemo
//
//  Created by 张枫林 on 2019/7/22.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef KthBiggestElement_hpp
#define KthBiggestElement_hpp

#include <stdio.h>
#include <vector>
using namespace std;

class KthBiggestElement {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0;
        int right = (int)nums.size() - 1;
        int pos = partition(nums, left, right);
        int index = (int)nums.size() - k;
        while(pos != index){
            while(pos > index){
                right = pos - 1;
                pos = partition(nums, left, right);
            }
            while(pos < index){
                left = pos + 1;
                pos = partition(nums, left, right);
            }
        }
        return nums[pos];
    }
    
    int partition(vector<int>& nums, int left, int right){
        int privot = nums[right];
        int p = left;
        for (int j=p; j< right; j++){
            if(nums[j] < privot){
                swap(nums, p, j);
                p++;
            }
        }
        swap(nums, p, right);
        return p;
    }
    
    void swap(vector<int>& nums, int index1, int index2){
        if(index1 == index2){
            return;
        }
        int temp = nums[index1];
        nums[index1] = nums[index2];
        nums[index2] = temp;
    }
};

void testKthBiggest2();
#endif /* KthBiggestElement_hpp */
