//
//  main.cpp
//  PruneDemo
//
//  Created by 张枫林 on 2019/8/4.
//  Copyright © 2019 张枫林. All rights reserved.
//

#include <iostream>
#include "N-Queens.hpp"
#include "Letter Combinations of a Phone Number.hpp"

/*
 剪枝问题
 */
int main(int argc, const char * argv[]) {
    
    Solution_51().solveNQueens(4);
    Solution_17().letterCombinations("23");
    return 0;
}
