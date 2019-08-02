//
//  Maximum Depth of Binary Tree.hpp
//  TreeDemo
//
//  Created by fenglin on 2019/8/1.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Maximum_Depth_of_Binary_Tree_hpp
#define Maximum_Depth_of_Binary_Tree_hpp

#include <stdio.h>
/*
 104. 二叉树的最大深度
 
 给定一个二叉树，找出其最大深度。
 
 二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
 
 说明: 叶子节点是指没有子节点的节点。
 
 示例：
 给定二叉树 [3,9,20,null,null,15,7]，
 
 3
 / \
 9  20
 /  \
 15   7
 返回它的最大深度 3 。
 */

#include "../TreeNode.hpp"

class Solution_104 {
public:
    int maxDepth(TreeNode* root){
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return (left > right ? left : right) + 1;
    }
    int depth(TreeNode* root){
        return root ? 1 : 0;
        
    }
};
#endif /* Maximum_Depth_of_Binary_Tree_hpp */
