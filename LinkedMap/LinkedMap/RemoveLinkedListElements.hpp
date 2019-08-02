//
//  RemoveLinkedListElements.hpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/5.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef RemoveLinkedListElements_hpp
#define RemoveLinkedListElements_hpp

/*
 删除链表中等于给定值 val 的所有节点。
 
 示例:
 
 输入: 1->2->6->3->4->5->6, val = 6
 输出: 1->2->3->4->5
 */
#include <stdio.h>
#include "LinkedList.h"


class Solution_203 {
    
public:
    ListNode* removeElements(ListNode* head, int val) {
        // 添加一个虚拟头结点
        ListNode *current = new ListNode(0);
        current->next = head;
        ListNode *p = current;
        while (p && p->next) {
            if (p->next->val == val) {
                p->next = p->next->next;
            }else{
                p = p->next;
            }
        }
        return current->next;
    }
};

#endif /* RemoveLinkedListElements_hpp */
