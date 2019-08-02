//
//  Symmetric Tree.hpp
//  TreeDemo
//
//  Created by fenglin on 2019/8/1.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Symmetric_Tree_hpp
#define Symmetric_Tree_hpp

#include <stdio.h>

/*
 101 对称二叉树
 给定一个二叉树，检查它是否是镜像对称的。
 
 例如，二叉树 [1,2,2,3,4,4,3] 是对称的。
 
 1
 / \
 2   2
 / \ / \
 3  4 4  3
 但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:
 
 1
 / \
 2   2
 \   \
 3    3
 说明:
 
 如果你可以运用递归和迭代两种方法解决这个问题，会很加分
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/symmetric-tree
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

#include "../TreeNode.hpp"
#include <deque>

using namespace std;

class Solution_101 {
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root);
    }
    
    bool isMirror(TreeNode* p, TreeNode *q){
        if (p == nullptr && q == nullptr) {
            return true;
        }
        if (p == nullptr || q == nullptr) {
            return false;
        }
        return (p->val == q->val) && isMirror(p->left, q->right) && isMirror(p->right, q->left);
    }
    
    bool isSymmetricV2(TreeNode* root){
        if (!root) {
            return true;
        }
        deque<TreeNode*> q;
        q.push_front(root);
        q.push_back(root);
        while (!q.empty()) {
            TreeNode *front = q.front();
            TreeNode *back = q.back();
            q.pop_front();
            q.pop_back();
            if (front == nullptr && back == nullptr) {
                continue;
            }
            if (front == nullptr || back == nullptr) {
                return false;
            }
            
            if (front->val != back->val) {
                return false;
            }
            q.push_front(front->left);
            q.push_back(back->right);
            q.push_front(front->right);
            q.push_back(back->left);
        }
        return true;
    }
};

void testSymmetricTree();

#endif /* Symmetric_Tree_hpp */
