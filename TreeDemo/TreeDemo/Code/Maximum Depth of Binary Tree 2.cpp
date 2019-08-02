//
//  Maximum Depth of Binary Tree.cpp
//  TreeDemo
//
//  Created by 张枫林 on 2019/8/1.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "Maximum Depth of Binary Tree 2.hpp"

void testMaximumDepthOfBinaryTree(){
    TreeNode *root = new TreeNode(3);
    
    TreeNode *root2 = new TreeNode(20);
    TreeNode *left2 = new TreeNode(15);
    TreeNode *right2 = new TreeNode(7);
    root2->left = left2;
    root2->right = right2;
    
    root->left = new TreeNode(9);
    root->right = root2;
    
    int ret =  Solution().maxDepth(root);
    
    printf("maxDepth == %d",ret);
    
    ret = Solution().maxDepthV2(root);
    
    printf("maxDepth2 == %d",ret);
}
