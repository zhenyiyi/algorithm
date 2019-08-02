//
//  Same Tree.hpp
//  TreeDemo
//
//  Created by fenglin on 2019/8/1.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Same_Tree_hpp
#define Same_Tree_hpp

#include <stdio.h>

/*
 给定两个二叉树，编写一个函数来检验它们是否相同。
 
 如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
 
 示例 1:
 
 输入:       1         1
 / \       / \
 2   3     2   3
 
 [1,2,3],   [1,2,3]
 
 输出: true
 示例 2:
 
 输入:      1          1
 /           \
 2             2
 
 [1,2],     [1,null,2]
 
 输出: false
 示例 3:
 
 输入:       1         1
 / \       / \
 2   1     1   2
 
 [1,2,1],   [1,1,2]
 
 输出: false
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/same-tree
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 
 */

#include "TreeNode.hpp"
#include <vector>
#include <deque>
using namespace std;

class Solution_100 {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return isSameTreeImp(p, q);
    }
    
    bool isSameTreeImp(TreeNode* p, TreeNode* q){
        if (p == nullptr && q == nullptr) {
            return true;
        }
        if ((p == nullptr && q != nullptr) || (q == nullptr && p != nullptr)) {
            return false;
        }
        if (p->val != q->val ) {
            return false;
        }
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

void testSameTree();

/*
 输入：
 [1,2]
 [1,null,2]
 输出：
 true
 */
#endif /* Same_Tree_hpp */
