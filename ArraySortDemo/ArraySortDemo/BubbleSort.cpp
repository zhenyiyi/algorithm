//
//  BubbleSort.cpp
//  ArraySortDemo
//
//  Created by fenglin on 2019/7/18.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "BubbleSort.hpp"

void testArraySort(){
    vector<int> arr = {4, 5, 6, 3, 2, 1};
    ArraySort().sort(arr);
    
    for (auto num : arr) {
        printf("%d ",num);
    }
    printf("\n");
}
