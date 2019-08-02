//
//  KthBiggestElement.cpp
//  ArraySortDemo
//
//  Created by 张枫林 on 2019/7/22.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "KthBiggestElement.hpp"

void testKthBiggest2(){
    vector<int> arr = {3,2,1,5,6,4};
    int ret = KthBiggestElement().findKthLargest(arr, 6);
    printf("ret2 == %d\n",ret);
}
