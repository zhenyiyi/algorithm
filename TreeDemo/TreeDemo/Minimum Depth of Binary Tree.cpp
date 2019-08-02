//
//  Minimum Depth of Binary Tree.cpp
//  TreeDemo
//
//  Created by 张枫林 on 2019/8/1.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "Minimum Depth of Binary Tree.hpp"

void testMinDepth(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    
    int ret = Solution_111().minDepth(root);
    printf("ret == %d",ret);
}
