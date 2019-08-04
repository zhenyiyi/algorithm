//
//  Minimum Depth of Binary Tree.hpp
//  TreeDemo
//
//  Created by 张枫林 on 2019/8/1.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Minimum_Depth_of_Binary_Tree_hpp
#define Minimum_Depth_of_Binary_Tree_hpp

#include <stdio.h>
/*
 给定一个二叉树，找出其最小深度。
 
 最小深度是从根节点到最近叶子节点的最短路径上的节点数量。
 
 说明: 叶子节点是指没有子节点的节点。
 
 示例:
 
 给定二叉树 [3,9,20,null,null,15,7],
 
 3
 / \
 9  20
 /  \
 15   7
 返回它的最小深度  2.
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/minimum-depth-of-binary-tree
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

#include "TreeNode.hpp"
#include <cmath>
#include <cstdlib>

class Solution_111 {
public:
    int minDepth(TreeNode* root) {
        // 如果当前树是空的，那么返回0
        if (root == nullptr) {
            return 0;
        }
        // 到达 叶子节点
        if (root->left ==nullptr && root->right == nullptr) {
            return 1;
        }
        int min_depth = INT32_MAX;
        // 如果有左子树，得到左子树的最小值
        if (root->left) {
            min_depth = fmin(min_depth, minDepth(root->left));
        }
        // 和右子树比较，得到右子树的最小值
        if (root->right) {
            min_depth = fmin(min_depth, minDepth(root->right));
        }
        // 加上当前节点的高度
        return min_depth + 1;
    }
    
    int minDepthV2(TreeNode* root){
        if (root == nullptr) {
            return 0;
        }
        // 如果没有左子树，则取右子树中寻找
        if (!root->left) {
            return 1 + minDepth(root->right);
        }
        // 如果没有右子树，则从左子树中寻找
        if (!root->right) {
            return 1 + minDepth(root->left);
        }
        // Devide and Coquer
        int minLeft = minDepth(root->left);
        int minRight = minDepth(root->right);
        return fminl(minLeft, minRight) + 1;
    }
};

/*
 时间复杂度：我们访问每个节点一次，时间复杂度为 O(N)O(N) ，其中 NN 是节点个数。
 空间复杂度：最坏情况下，整棵树是非平衡的，例如每个节点都只有一个孩子，递归会调用 NN （树的高度）次，因此栈的空间开销是 O(N)O(N) 。
 
 但在最好情况下，树是完全平衡的，高度只有 \log(N)log(N)，因此在这种情况下空间复杂度只有 O(\log(N))O(log(N))
 
 作者：LeetCode
 链接：https://leetcode-cn.com/problems/two-sum/solution/er-cha-shu-de-zui-xiao-shen-du-by-leetcode/
 来源：力扣（LeetCode）
 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */
void testMinDepth();

#endif /* Minimum_Depth_of_Binary_Tree_hpp */
