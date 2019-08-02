//
//  BinarySearch.hpp
//  ArraySortDemo
//
//  Created by 张枫林 on 2019/7/23.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef BinarySearch_hpp
#define BinarySearch_hpp

#include <stdio.h>
#include <vector>

using namespace std;


class BinarySearch {
    
public:
    int bSearch(vector<int> &nums, int val){
        return bSearchInternally(nums, val, 0, (int)nums.size());
    }
    
    int bSearchInternally(vector<int> &nums, int val, int low, int height){
        int mid = low + ((height - low) >> 1);
        while (low <= height) {
            if (nums[mid] == val) {
                return mid;
            }else if (nums[mid] > val) {
                height = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return -1;
    }
    int bSearchInternallyV2(vector<int> &nums, int val, int low, int height){
        if (low > height) {
            return -1;
        }
        int mid = low + ((height - low) >> 1);
        if (nums[mid] == val) {
            return mid;
        }else if (nums[mid] > val) {
            return bSearchInternallyV2(nums, val, low, mid -1);
        }else{
            return bSearchInternallyV2(nums, val, mid+1, height);
        }
    }
};


double mySqrt(double num);
#endif /* BinarySearch_hpp */
