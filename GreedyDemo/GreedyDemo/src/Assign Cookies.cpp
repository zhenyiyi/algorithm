//
//  Assign Cookies.cpp
//  GreedyDemo
//
//  Created by fenglin on 2019/8/7.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "Assign Cookies.hpp"
#include <queue>

void Solution_443::test(){
    vector<int> g = {10,9,8,7};
    vector<int> s = {5,6,7,8};
    int ret = findContentChildren(g, s);
    printf("ret == %d",ret);
}
