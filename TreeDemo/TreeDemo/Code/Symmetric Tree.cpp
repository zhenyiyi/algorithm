//
//  Symmetric Tree.cpp
//  TreeDemo
//
//  Created by fenglin on 2019/8/1.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "Symmetric Tree.hpp"

void testSymmetricTree(){
    TreeNode *root = new TreeNode(1);
    TreeNode *left = new TreeNode(2);
    TreeNode *right = new TreeNode(2);
    
    root->left = left;
    root->right = right;
    
    left->left = new TreeNode(3);
    left->right = new TreeNode(4);
    
    right->left = new TreeNode(4);
    right->right = new TreeNode(3);
    
    bool ret = Solution_101().isSymmetricV2(root);
    printf("isSymmetricV2 == %d\n",ret);
}
