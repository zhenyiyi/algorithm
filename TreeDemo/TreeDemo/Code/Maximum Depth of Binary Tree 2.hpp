//
//  Maximum Depth of Binary Tree.hpp
//  TreeDemo
//
//  Created by 张枫林 on 2019/8/1.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Maximum_Depth_of_Binary_Tree_hpp
#define Maximum_Depth_of_Binary_Tree_hpp

#include <stdio.h>
#include "TreeNode.hpp"
#include <queue>


using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int max_left = maxDepth(root->left);
        int max_right = maxDepth(root->right);
        return (max_left > max_right ? max_left : max_right) + 1;
    }
    
    int maxDepthV2(TreeNode* root){
        queue<pair<TreeNode *, int>> q;
        if (root != nullptr) {
            q.push({root, 1});
        }
        int depth = 0;
        while (!q.empty()) {
            pair<TreeNode *, int> node = q.front();
            q.pop();
            int curDepth = node.second;
            TreeNode *tempNode = node.first;
            if (tempNode) {
                depth = depth > curDepth ? depth : curDepth;
                q.push({tempNode->left, curDepth + 1});
                q.push({tempNode->right, curDepth + 1});
            }
        }
        return depth;
    }
private:
};

void testMaximumDepthOfBinaryTree();


#endif /* Maximum_Depth_of_Binary_Tree_hpp */
