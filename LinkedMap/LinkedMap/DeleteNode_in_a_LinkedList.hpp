//
//  DeleteNode_in_a_LinkedList.hpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/5.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef DeleteNode_in_a_LinkedList_hpp
#define DeleteNode_in_a_LinkedList_hpp

#include <stdio.h>
#include "LinkedList.h"

class Solution_237 {
    
public:
    // 偷梁换柱方法
    /*
     按照正常删除链表的思维是先找到当前节点的前一个节点，再删除当前节点。 这道题就妙在只给定删除节点，只需将下一个节点的状态赋给当前节点，再删除下一个节点。
     */
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
#endif /* DeleteNode_in_a_LinkedList_hpp */
