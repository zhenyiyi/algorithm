//
//  HuffmanTree.cpp
//  HeapDemo
//
//  Created by fenglin on 2019/8/14.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "HuffmanTree.hpp"
#include <iostream>
#include <algorithm>
#include <queue>


struct cmp{
    bool operator ()(const HuffmanTree a, const HuffmanTree b)
    {
        return a->weight > b->weight;// 按照value从小到大排列
    }
};

HuffmanTree huffman(vector<int> &vec){
    // 建立一个最小堆
    priority_queue<HuffmanTree, vector<HuffmanTree>, cmp> minQueue;
    for (auto num  : vec) {
        HuffmanTree node = new _TreeNode(num);
        node->left = node->right = nullptr;
        minQueue.push(node);
    }
    //
    HuffmanTree T;
    while (!minQueue.empty() && minQueue.size() != 1) {
        HuffmanTree left = minQueue.top();
        minQueue.pop();
        HuffmanTree right = minQueue.top();
        minQueue.pop();
        T = new _TreeNode(left->weight + right->weight);
        T->left = left;
        T->right = right;
        minQueue.push(T);
    }
    T = minQueue.top();
    return T;
}


void testHuffmanTree(){
    vector<int> nums = {3, 2, 4, 2, 1};
    HuffmanTree tree = huffman(nums);
    int wkl = 0;
    
    queue<HuffmanTree> queue;
    queue.push(tree);
    // BFS 遍历
    while (!queue.empty()) {
        HuffmanTree top = queue.front();
        queue.pop();
        if (top->left) {
            queue.push(top->left);
        }
        if (top->right) {
            queue.push(top->right);
        }
        if (top->left || top ->right) {
            wkl += top->weight;
        }
    }
    printf("total wkl %d\n",wkl);
}
