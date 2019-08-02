//
//  TreeNode.hpp
//  TreeDemo
//
//  Created by fenglin on 2019/7/12.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef TreeNode_hpp
#define TreeNode_hpp

#include <stdio.h>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x), left(nullptr),right(nullptr){};
};
#endif /* TreeNode_hpp */
