//
//  InsertionSort.cpp
//  ArraySortDemo
//
//  Created by 张枫林 on 2019/7/22.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "InsertionSort.hpp"

void testArrayInsertionSort(){
    vector<int> arr = {4, 5, 6, 3, 2, 1};
    InsertionSort().insertionSort(arr);
    
    for (auto num : arr) {
        printf("%d ",num);
    }
    printf("\n");
}
