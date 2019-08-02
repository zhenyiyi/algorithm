//
//  CountingSort.hpp
//  ArraySortDemo
//
//  Created by fenglin on 2019/7/23.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef CountingSort_hpp
#define CountingSort_hpp

#include <stdio.h>
#include <vector>

using namespace std;

class CountingSort {
    
public:
    void sort(vector<int> &nums){
        if (nums.size() <= 1) {
            return;
        }
        
        int maxVal = nums[0];
        for (auto num : nums) {
            if (maxVal < num) {
                maxVal = num;
            }
        }
        
        vector<int> arr(maxVal + 1);
        
        // 计算每个元素的个数，放入arr 中
        for (auto num : nums) {
            arr[num]++;
        }
        // 依次累加
        for (int i=1; i<arr.size(); i++) {
            arr[i] = arr[i] + arr[i-1];
        }
        // 临时数组r，存储排序之后的结果
        vector<int> tempArr(nums.size());
        for (int j=(int)nums.size()-1; j>=0; j--) {
            int index = arr[nums[j]] - 1;
            tempArr[index] = nums[j];
            arr[nums[j]]--;
        }
        // 将结果拷贝会a数组
        for (int k=0; k<tempArr.size(); k++) {
            nums[k] = tempArr[k];
        }
    }
};

void testCountingSort();



#endif /* CountingSort_hpp */
