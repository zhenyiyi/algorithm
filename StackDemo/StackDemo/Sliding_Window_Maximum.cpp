//
//  Sliding_Window_Maximum.cpp
//  StackDemo
//
//  Created by fenglin on 2019/7/10.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "Sliding_Window_Maximum.hpp"

void Solution_239::test(){
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    vector<int> res = this->maxSlidingWindow(nums, 3);
    for (auto num : res) {
        printf("%d\n",num);
    }
}
