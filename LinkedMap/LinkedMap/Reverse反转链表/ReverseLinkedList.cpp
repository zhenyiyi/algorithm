//
//  ReverseLinkedList.cpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/4.
//  Copyright © 2019 quanshi. All rights reserved.
//  https://leetcode-cn.com/problems/reverse-linked-list/

#include "ReverseLinkedList.hpp"

void Solution_206::test(){
    ListNode *node1 = new ListNode(2);
    ListNode *node2 = new ListNode(4);
    ListNode *node3 = new ListNode(3);
    
    node1->next = node2;
    node2->next = node3;
    
    ListNode *node = reverseList(node1);
    ListNode *r = node;
    while (r) {
        printf("%d\n",r->val);
        r = r->next;
    }
}
