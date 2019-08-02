//
//  BucketSort.hpp
//  ArraySortDemo
//
//  Created by 张枫林 on 2019/7/22.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef BucketSort_hpp
#define BucketSort_hpp

#include <stdio.h>
#include <vector>


using namespace std;

class BucketSort {
    
    
public:
    void sort(vector<int>& nums){
        int minVal = nums[0];
        int maxVal = nums[0];
        for (auto num  : nums) {
            if (minVal > num) {
                minVal = num;
            }else if(maxVal < num){
                maxVal = num;
            }
        }
        int bucketCount = maxVal - minVal + 1;
        vector<vector<int>> buckets(bucketCount);
        for (int i=0; i<nums.size(); i++) {
            int bucketIndex = nums[i] - minVal;
            buckets[bucketIndex].push_back(nums[i]);
        }
        printf("%zd",buckets.size());
        
        for (auto arr : buckets) {
            stable_sort(arr.begin(), arr.end());
        }
        
        printf("%zd",nums.size());
    }
};

void testBucketSort();

#endif /* BucketSort_hpp */
