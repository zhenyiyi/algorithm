//
//  Balanced Binary Tree.hpp
//  TreeDemo
//
//  Created by 张枫林 on 2019/8/1.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Balanced_Binary_Tree_hpp
#define Balanced_Binary_Tree_hpp

#include <stdio.h>
/*
 给定一个二叉树，判断它是否是高度平衡的二叉树。
 
 本题中，一棵高度平衡二叉树定义为：
 
 一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过1。
 
 示例 1:
 
 给定二叉树 [3,9,20,null,null,15,7]
 
 3
 / \
 9  20
 /  \
 15   7
 返回 true 。
 
 示例 2:
 
 给定二叉树 [1,2,2,3,3,null,null,4,4]
 
 1
 / \
 2   2
 / \
 3   3
 / \
 4   4
 返回 false 。
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/balanced-binary-tree
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

#include "TreeNode.hpp"
#include <cstdlib>


class Solution_110 {
public:
    bool isBalanced(TreeNode* root) {
        this->ret = true;
        maxDepth(root);
        return ret;
    }
    
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int max_left = maxDepth(root->left);
        int max_right = maxDepth(root->right);
        if (abs(max_right-max_left) > 1) {
            this->ret = false;
        }
        return (max_left > max_right ? max_left : max_right) + 1;
    }
    
private:
    bool ret;
};

/*
 分析：
 判断左右子树高度小于1
 */

#endif /* Balanced_Binary_Tree_hpp */
