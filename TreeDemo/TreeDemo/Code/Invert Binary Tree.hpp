//
//  Invert Binary Tree.hpp
//  TreeDemo
//
//  Created by 张枫林 on 2019/8/2.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Invert_Binary_Tree_hpp
#define Invert_Binary_Tree_hpp

#include <stdio.h>
/*
 翻转一棵二叉树。
 
 示例：
 
 输入：
 
 4
 /   \
 2     7
 / \   / \
 1   3 6   9
 输出：
 
 4
 /   \
 7     2
 / \   / \
 9   6 3   1
 备注:
 这个问题是受到 Max Howell 的 原问题 启发的 ：
 
 谷歌：我们90％的工程师使用您编写的软件(Homebrew)，但是您却无法在面试时在白板上写出翻转二叉树这道题，这太糟糕了。
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/invert-binary-tree
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

//一次性通过 ✅✅✅  😄😄😄

#include "../TreeNode.hpp"
class Solution_226 {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }
        // 如果是叶子节点，返回本身
        if (root->left ==nullptr && root->right == nullptr) {
            return root;
        }
        TreeNode *tempNode = root->right;
        root->right = invertTree(root->left);
        root->left = invertTree(tempNode);
        return root;
    }
};
#endif /* Invert_Binary_Tree_hpp */
