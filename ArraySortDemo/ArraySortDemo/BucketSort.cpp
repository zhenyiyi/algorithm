//
//  BucketSort.cpp
//  ArraySortDemo
//
//  Created by 张枫林 on 2019/7/22.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "BucketSort.hpp"

void testBucketSort(){
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9};
    
    BucketSort().sort(arr);
}
