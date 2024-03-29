//
//  Lowest Common Ancestor of a Binary Tree.hpp
//  TreeDemo
//
//  Created by fenglin on 2019/7/15.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Lowest_Common_Ancestor_of_a_Binary_Tree_hpp
#define Lowest_Common_Ancestor_of_a_Binary_Tree_hpp

/*
 给定一个二叉树, 找到该树中两个指定节点的最近公共祖先。
 
 百度百科中最近公共祖先的定义为：“对于有根树 T 的两个结点 p、q，最近公共祖先表示为一个结点 x，满足 x 是 p、q 的祖先且 x 的深度尽可能大（一个节点也可以是它自己的祖先）。”
 
 例如，给定如下二叉树:  root = [3,5,1,6,2,0,8,null,null,7,4]
 
 
 
  
 
 示例 1:
 
 输入: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
 输出: 3
 解释: 节点 5 和节点 1 的最近公共祖先是节点 3。
 示例 2:
 
 输入: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
 输出: 5
 解释: 节点 5 和节点 4 的最近公共祖先是节点 5。因为根据定义最近公共祖先节点可以为节点本身。
  
 
 说明:
 
 所有节点的值都是唯一的。
 p、q 为不同节点且均存在于给定的二叉树中。
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include <stdio.h>
#include "TreeNode.hpp"


class Solution_236 {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // 1. 终止条件 ，找到P 或者 Q
        if (root == nullptr || root == p || root == q) {
            return root;
        }
        TreeNode *leftNode = lowestCommonAncestor(root->left, p, q);
        TreeNode *rightNode = lowestCommonAncestor(root->right, p, q);
        // 2. 如果左右子树都不为空，那么当前节点就是最近的祖先节点
        if (leftNode != nullptr && rightNode != nullptr) {
            return root;
        }
        // 3. 如果都在左子树，那么继续查找。同理
        return leftNode != nullptr ? leftNode : rightNode;
    }
};

void testLowestCommonAncestorV2();
#endif /* Lowest_Common_Ancestor_of_a_Binary_Tree_hpp */
