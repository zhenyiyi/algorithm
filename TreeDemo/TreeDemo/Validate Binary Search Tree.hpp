//
//  Validate Binary Search Tree.hpp
//  TreeDemo
//  
//  Created by fenglin on 2019/7/12.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Validate_Binary_Search_Tree_hpp
#define Validate_Binary_Search_Tree_hpp

/*
 98. 验证二叉搜索树
 
 给定一个二叉树，判断其是否是一个有效的二叉搜索树。
 
 假设一个二叉搜索树具有如下特征：
 
 节点的左子树只包含小于当前节点的数。
 节点的右子树只包含大于当前节点的数。
 所有左子树和右子树自身必须也是二叉搜索树。
 示例 1:
 
 输入:
 2
 / \
 1   3
 输出: true
 示例 2:
 
 输入:
 5
 / \
 1   4
      / \
     3   6
 输出: false
 解释: 输入为: [5,1,4,null,null,3,6]。
      根节点的值为 5 ，但是其右子节点值为 4
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/validate-binary-search-tree
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include <stdio.h>
#include "TreeNode.hpp"
#include <vector>
#include <unordered_set>

using namespace std;
class Solution_98 {
public:
    // 1. 因为二叉搜索树中序遍历是递增的,所以我们可以中序遍历判断前一数是否小于后一个数
    bool isValidBST(TreeNode* root) {
        helper(root);
        vector<int> sortedRes = res;
        sort(sortedRes.begin(), sortedRes.end());
        unordered_set<int> st(res.begin(), res.end());
        return res == sortedRes && res.size() == st.size();
    }
    
    void helper(TreeNode* root){
        if (root == nullptr) {
            return;
        }
        helper(root->left);
        res.push_back(root->val);
        helper(root->right);
    }
    
private:
    vector<int> res;
};

class Solution_98_2 {
public:
    // 1. 因为二叉搜索树中序遍历是递增的,所以我们可以中序遍历判断前一数是否小于后一个数
    bool isValidBST(TreeNode* root) {
        //默认前置节点是空
        this->pre = nullptr;
        return isBST(root);
    }
    bool isBST(TreeNode *root){
        if (root == nullptr) {
            return true;
        }
        isBST(root->left);
        if (this->pre && root->val < this->pre->val) {
            return false;
        }
        this->pre = root;
        printf("this->pre->val -> %d\n",this->pre->val);
        return  isBST(root->right);
    }
    
private:
    TreeNode *pre; /*前置节点*/
};

class Solution_98_3 {
public:
    // 1. 因为二叉搜索树中序遍历是递增的,所以我们可以中序遍历判断前一数是否小于后一个数
    bool isValidBST(TreeNode* root){
        return isBST(root, LONG_MIN, LONG_MAX);
    }
    
    bool isBST(TreeNode *root, long minVal , long maxVal){
        if (root == nullptr) {
            return true;
        }
        if (root->val >= maxVal || root->val <= minVal) {
            return false;
        }
        return isBST(root->left, minVal, root->val) && isBST(root->right, root->val, maxVal);
    }
private:

};

void testValidBST();

void testValidBST_2();

#endif /* Validate_Binary_Search_Tree_hpp */
