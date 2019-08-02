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

class Solution_111 {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return false;
    }
private:
    int min_left;
    int min_right;
    
};

void testMinDepth();

#endif /* Minimum_Depth_of_Binary_Tree_hpp */
