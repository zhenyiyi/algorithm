//
//  Same Tree.cpp
//  TreeDemo
//
//  Created by fenglin on 2019/8/1.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "Same Tree.hpp"

void testSameTree(){
    TreeNode *root = new TreeNode(5);
    TreeNode *right = new TreeNode(8);
    root->right = right;
   
    TreeNode *root2 = new TreeNode(5);
    TreeNode *left = new TreeNode(8);
    root2->left = left;
    
    bool ret = Solution_100().isSameTree(root, root2);
    
    printf("%d\n",ret);
    
}
