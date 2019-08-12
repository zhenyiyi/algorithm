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

typedef struct TreeNode *Position;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    int visit;// 访问次数
    TreeNode(int x):val(x), left(nullptr),right(nullptr){};
};
#endif /* TreeNode_hpp */
