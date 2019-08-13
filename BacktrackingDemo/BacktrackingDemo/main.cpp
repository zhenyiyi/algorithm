//
//  main.cpp
//  BacktrackingDemo
//
//  Created by 张枫林 on 2019/8/8.
//  Copyright © 2019 张枫林. All rights reserved.
//

#include <iostream>
#include "src/Permutations.hpp"


int main(int argc, const char * argv[]) {
    
    vector<int> nums = {1,2,3};
    Solution_46().permute(nums);
    return 0;
}
