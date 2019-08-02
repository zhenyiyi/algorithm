//
//  Validate Binary Search Tree.cpp
//  TreeDemo
//
//  Created by fenglin on 2019/7/12.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "Validate Binary Search Tree.hpp"
void testValidBST(){
    TreeNode *root = new TreeNode(5);
    TreeNode *root2 = new TreeNode(3);
    TreeNode *root3 = new TreeNode(8);
    
    TreeNode *left1 = new TreeNode(1);
    TreeNode *left2 = new TreeNode(6);
    
    TreeNode *right1 = new TreeNode(4);
    TreeNode *right2 = new TreeNode(10);
    
    root->left = root2;
    root->right = root3;
    
    root2->left = left1;
    root2->right = right1;
    
    root3->left = left2;
    root3->right = right2;
    
    bool ret = Solution_98_2().isValidBST(root);
    
    printf("ret= %d\n ",ret);
}

void testValidBST_2(){
    
    TreeNode *root = new TreeNode(2147483647);

    bool ret = Solution_98_3().isValidBST(root);
    
    printf("ret= %d\n ",ret);
}
