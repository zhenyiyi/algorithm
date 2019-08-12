//
//  BinarySearchTree.hpp
//  TreeDemo
//
//  Created by fenglin on 2019/7/31.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <stdio.h>
#include "TreeNode.hpp"

Position Find(int X, TreeNode * BST ); //从二叉搜索树BST 中查找元素X，返回其所在结点的地址;
Position IterFind( int X, TreeNode * BST );

Position FindMin(TreeNode * BST ); //从二叉搜索树BST中查找并返回 最小元素所在结点的地址;

Position FindMax(TreeNode * BST ); //从二叉搜索树BST中查找并返回 最大元素所在结点的地址。
TreeNode* Insert(int X, TreeNode * BST );
TreeNode* Delete(int X, TreeNode * BST );



#endif /* BinarySearchTree_hpp */
