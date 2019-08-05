//
//  Kth_Largest_Element_in_a_Stream.cpp
//  LinkedMap
//
//  Created by 张枫林 on 2019/7/9.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "Kth_Largest_Element_in_a_Stream.hpp"

void test(){
    int k = 3;
    vector<int> arr = {4,5,8,2};
//    KthLargest *kthLargest = new KthLargest(k, arr);
    KthLargestV2 *kthLargest = new KthLargestV2(k, arr);
    int ret = kthLargest->add(3);// returns 4
    ret = kthLargest->add(5);// returns 5
    ret = kthLargest->add(10);// returns 5
    ret = kthLargest->add(9);// returns 8
    ret = kthLargest->add(4);// returns 8
    printf("---------");
}
