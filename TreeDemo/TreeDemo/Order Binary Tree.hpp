//
//  Order Binary Tree.hpp
//  TreeDemo
//
//  Created by fenglin on 2019/7/15.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Order_Binary_Tree_hpp
#define Order_Binary_Tree_hpp

#include <stdio.h>
#include "TreeNode.hpp"
#include <vector>
#include <stack>

using namespace std;
/*
 * 遍历树
 */
class OrderBinaryTree {
    
public:
    void preorder(TreeNode *root){
        if (root) {
            this->preVector.push_back(root->val);
            preorder(root->left);
            preorder(root->right);
        }
    }
    
    void inorder(TreeNode *root){
        if (root) {
            inorder(root->left);
            inVector.push_back(root->val);
            inorder(root->right);
        }
    }
    
    void postorder(TreeNode *root){
        if (root) {
            inorder(root->left);
            inorder(root->right);
            postVector.push_back(root->val);
        }
    }
public:
    vector<int> preVector;
    vector<int> inVector;
    vector<int> postVector;
};

class OrderBinaryTreeV2 {
    
public:
    void preOrder(TreeNode *root){
        stack<TreeNode *> preStack;
        while (root || !preStack.empty()) {
            while (root) {
                // 前序遍历
                printf("root->val -> %d\n",root->val);
                preStack.push(root);
                root = root->left;
            }
            if (!preStack.empty()) {
                TreeNode * node = preStack.top();
                //中序遍历 printf("root->val -> %d\n",node->val);
                preStack.pop();
                root = node->right;
            }
        }
    }
    
    void postorder(TreeNode *root){
        stack<TreeNode *> postStack;
        while (root || !postStack.empty()) {
            while (root) {
                root->visit ++;
                postStack.push(root);
                root = root->left;
            }
            if (!postStack.empty()) {
                TreeNode * node = postStack.top();
                postStack.pop();
                if (node->visit == 2) {
                    printf("root->val ->%d\n",node->val);
                    root = NULL;
                }else{
                    node->visit++;
                    postStack.push(node);
                    root = node->right;
                }
            }
        }
        
    }
};

void testOrderBinaryTree();

#endif /* Order_Binary_Tree_hpp */
