//
//  Path Sum.cpp
//  TreeDemo
//
//  Created by 张枫林 on 2019/8/1.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "Path Sum.hpp"

void testPathSum(){
    TreeNode *node = new TreeNode(1);
    node->left = new TreeNode(2);
    
    int ret =  Solution_112().hasPathSum(node, 1);
    
    printf("ret == %d",ret);
}
