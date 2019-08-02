//
//  Path Sum.hpp
//  TreeDemo
//
//  Created by 张枫林 on 2019/8/1.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Path_Sum_hpp
#define Path_Sum_hpp

#include <stdio.h>
/*
 给定一个二叉树和一个目标和，判断该树中是否存在根节点到叶子节点的路径，这条路径上所有节点值相加等于目标和。
 
 说明: 叶子节点是指没有子节点的节点。
 
 示例:
 给定如下二叉树，以及目标和 sum = 22，
 
 5
 / \
 4   8
 /   / \
 11  13  4
 /  \      \
 7    2      1
 返回 true, 因为存在目标和为 22 的根节点到叶子节点的路径 5->4->11->2。
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/path-sum
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#endif /* Path_Sum_hpp */


#include "TreeNode.hpp"


class Solution_112 {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == nullptr) {
            return false;
        }
        return hasPathSumImp(root, sum);
    }
    bool hasPathSumImp(TreeNode* root, int sum){
        if (root == nullptr) {
            return sum == 0;
        }
        if (root->right != nullptr && root->left != nullptr){
            return hasPathSumImp(root->left, sum - root->val) || hasPathSumImp(root->right, sum - root->val);
        }
        
        if (root->right == nullptr) {
            return hasPathSumImp(root->left, sum - root->val);
        }
        if (root->left == nullptr){
            return hasPathSumImp(root->right, sum - root->val);
        }
        return false;
    }
    
    bool hasPathSumV2(TreeNode* root, int sum){
        if (root == nullptr) {
            return false;
        }
        sum -= root->val;
        // 相当于到 叶子节点
        if (root->left==nullptr && root->right==nullptr) {
            return sum == 0;
        }
        return hasPathSumV2(root->left, sum) || hasPathSumV2(root->right, sum);
    }
};

void testPathSum();


/*
 分析：
 遍历每一条路径，然后求和，看是否等于目标值
 */
