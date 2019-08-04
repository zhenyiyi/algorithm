//
//  Binary Tree Level Order Traversal.hpp
//  TreeDemo
//
//  Created by 张枫林 on 2019/8/3.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Binary_Tree_Level_Order_Traversal_hpp
#define Binary_Tree_Level_Order_Traversal_hpp

#include <stdio.h>
/*
 给定一个二叉树，返回其按层次遍历的节点值。 （即逐层地，从左到右访问所有节点）。
 
 例如:
 给定二叉树: [3,9,20,null,null,15,7],
 
 3
 / \
 9  20
 /  \
 15   7
 返回其层次遍历结果：
 
 [
 [3],
 [9,20],
 [15,7]
 ]
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/binary-tree-level-order-traversal
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

#include "../TreeNode.hpp"
#include <vector>
#include <queue>
#include <set>



using namespace std;
class Solution_102 {
public:
    // BFS  遍历
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr) {
            return {};
        }
        vector<vector<int>> nums ;
        queue<TreeNode *> q;
//        set<TreeNode *> visitedSet;
        q.push(root);
        while (!q.empty()) {
            unsigned long length = q.size();
            vector<int> tempArr;
            for (int i=0; i<length; i++) {
                TreeNode *node = q.front();
                q.pop();
                tempArr.push_back(node->val);
                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }
            nums.push_back(tempArr);
        }
        return nums;
    }
    
    vector<vector<int>> levelOrderDFS(TreeNode* root){
        if (root == nullptr) {
            return {};
        }
        dfs(root, 0);
        return this->result;
    }
    
    void dfs(TreeNode* root, int level){
        if (root == nullptr) {
            return;
        }
        if (result.size() < level + 1) {
            vector<int> tempArr;
            result.push_back(tempArr);
        }
        result[level].push_back(root->val);
        dfs(root->left, level + 1);
        dfs(root->right, level + 1);
    }
private:
    vector<vector<int>> result;
};


/*
 分析：
 应该是广度优先搜索 BFS， 按层次遍历
 */
#endif /* Binary_Tree_Level_Order_Traversal_hpp */
