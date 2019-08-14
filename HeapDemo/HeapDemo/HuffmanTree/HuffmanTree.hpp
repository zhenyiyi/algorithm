//
//  HuffmanTree.hpp
//  HeapDemo
//
//  Created by fenglin on 2019/8/14.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef HuffmanTree_hpp
#define HuffmanTree_hpp

#include <stdio.h>
#include <vector>

using namespace std;

typedef struct _TreeNode *HuffmanTree;
struct _TreeNode {
    int weight;
    HuffmanTree left;
    HuffmanTree right;
    _TreeNode(int w){
        weight = w;
    }
};

HuffmanTree huffman(vector<int> &vec);

void testHuffmanTree();
#endif /* HuffmanTree_hpp */
