//
//  Last Stone Weight.hpp
//  GreedyDemo
//
//  Created by fenglin on 2019/8/7.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Last_Stone_Weight_hpp
#define Last_Stone_Weight_hpp

#include <stdio.h>
#include <vector>
using namespace std;

class Solution_1046 {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            sort(stones.rbegin(), stones.rend());
            // 必须要在排序之后， 石头已经碎掉的全部放到最后
            if (stones[1] == 0) {
                break;
            }
            stones[0] -= stones[1];
            stones[1] = 0;
        }
        return stones.front();
    }
    
    void test();
};
#endif /* Last_Stone_Weight_hpp */
