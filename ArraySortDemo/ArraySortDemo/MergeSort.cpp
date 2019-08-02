//
//  MergeSort.cpp
//  ArraySortDemo
//
//  Created by fenglin on 2019/7/22.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "MergeSort.hpp"

void testMergeSort(){
    vector<int> arr = {4, 5, 6, 3, 2, 1};
    MergeSort().sort(arr);
    for (auto num : arr) {
        printf("%d ",num);
    }
    printf("\n");
}
