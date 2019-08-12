//
//  BinarySearchTree.cpp
//  TreeDemo
//
//  Created by fenglin on 2019/7/31.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "BinarySearchTree.hpp"

//从二叉搜索树BST 中查找元素X，返回其所在结点的地址;
Position Find(int X, TreeNode * BST ){
    if (!BST) {
        return nullptr;
    }
    if (BST->val == X) {
        return BST;
    }else if (X < BST->val){
        return Find(X, BST->left);
    }else{
        return Find(X, BST->right);
    }
}

Position IterFind( int X, TreeNode * BST ){
    while (BST) {
        if (X < BST->val) {
            BST = BST->left;
        }else if (X > BST->val){
            BST = BST->right;
        }else{
            return BST;
        }
    }
    return nullptr;
}

//从二叉搜索树BST中查找并返回 最小元素所在结点的地址;
Position FindMin(TreeNode * BST ){
    while (BST) {
        BST = BST->left;
    }
    return BST;
}
//从二叉搜索树BST中查找并返回 最大元素所在结点的地址。
Position FindMax(TreeNode * BST ){
    while (BST) {
        BST = BST->right;
    }
    return BST;
}
TreeNode* Insert(int X, TreeNode * BST){
    if (!BST) {
        // 若原树为空，生成并返回一个结点的二叉搜索树
        BST = new TreeNode(X);
    }else{
        // 开始找要插入元素的位置
        if (X > BST->val){
            /*递归插入右子树*/
            BST->right = Insert(X, BST->right);
        }else if (X < BST->val){
            /*递归插入左子树*/
            BST->left = Insert(X, BST->left);
        }
        /* else X 已经存在，什么都不做 */
    }
    return BST;
}


TreeNode* Delete(int X, TreeNode * BST){
    TreeNode *tmp;
    if (!BST) {
        return nullptr;
    }else if (X < BST->val){
        return Delete(X, BST->left);
    }else if (X > BST->val){
        return Delete(X, BST->right);
    }else{
        if (BST->left && BST->right) {
            /*在右子树中找最小的元素填充删除结点*/
            tmp = FindMin(BST->right);
            BST->val = tmp->val;
            /*在删除结点的右子树中删除最小元素*/
            Delete(tmp->val, BST->right);
        }else{
            tmp = BST;
            if (!BST->left) {
                BST = BST->right;
            }else if (!BST->right){
                BST = BST->left;
            }
            delete tmp;
        }
    }
    return BST;
}
