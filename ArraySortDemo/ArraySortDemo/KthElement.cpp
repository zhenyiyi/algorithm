//
//  KthElement.cpp
//  ArraySortDemo
//
//  Created by fenglin on 2019/7/22.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "KthElement.hpp"

void testKthBiggest(){
    vector<int> arr = {1,5,5,7,88,11};
    int ret = KthElement().kthBiggest(arr, 6);
    printf("ret == %d\n",ret);
}
