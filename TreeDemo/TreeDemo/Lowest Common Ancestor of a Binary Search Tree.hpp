//
//  Lowest Common Ancestor of a Binary Search Tree.hpp
//  TreeDemo
//
//  Created by fenglin on 2019/7/15.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Lowest_Common_Ancestor_of_a_Binary_Search_Tree_hpp
#define Lowest_Common_Ancestor_of_a_Binary_Search_Tree_hpp

/*
 给定一个二叉搜索树, 找到该树中两个指定节点的最近公共祖先。
 
 百度百科中最近公共祖先的定义为：“对于有根树 T 的两个结点 p、q，最近公共祖先表示为一个结点 x，满足 x 是 p、q 的祖先且 x 的深度尽可能大（一个节点也可以是它自己的祖先）。”
 
 例如，给定如下二叉搜索树:  root = [6,2,8,0,4,7,9,null,null,3,5]
 
 
 
  
 
 示例 1:
 
 输入: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
 输出: 6
 解释: 节点 2 和节点 8 的最近公共祖先是 6。
 示例 2:
 
 输入: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 4
 输出: 2
 解释: 节点 2 和节点 4 的最近公共祖先是 2, 因为根据定义最近公共祖先节点可以为节点本身。
  
 
 说明:
 
 所有节点的值都是唯一的。
 p、q 为不同节点且均存在于给定的二叉搜索树中。
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-search-tree
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include <stdio.h>
#include "TreeNode.hpp"

/*
 我们来复习一下二叉搜索树（BST）的性质：
 
 节点左子树上的所有节点的值都小于等于节点的值
 
 节点右子树上的所有节点的值都大于等于节点的值
 
 左子树和右子树也都是 BST
 
 作者：LeetCode
 链接：https://leetcode-cn.com/problems/two-sum/solution/er-cha-sou-suo-shu-de-zui-jin-gong-gong-zu-xian--2/
 来源：力扣（LeetCode）
 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */
class Solution_235 {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int pVal = p->val;
        int qVal = q->val;
        if (root->val > pVal && root->val > qVal) {
            return lowestCommonAncestor(root->left, p, q);
        }else if (root->val < pVal && root->val < qVal) {
            return lowestCommonAncestor(root->right, p, q);
        }
        return root;
    }
    
    TreeNode* lowestCommonAncestorV2(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *ancestor = root;
        while (ancestor) {
            int parentVal = ancestor->val;
            if (parentVal > p->val && parentVal > q->val) {
                ancestor = ancestor->left;
                continue;
            }else if (parentVal < p->val && parentVal < q->val){
                ancestor = ancestor->right;
                continue;
            }
            break;
        }
        return ancestor;
    }
};

void testLowestCommonAncestor();

#endif /* Lowest_Common_Ancestor_of_a_Binary_Search_Tree_hpp */
