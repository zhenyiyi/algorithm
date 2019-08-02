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

using namespace std;

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

void testOrderBinaryTree();

#endif /* Order_Binary_Tree_hpp */
