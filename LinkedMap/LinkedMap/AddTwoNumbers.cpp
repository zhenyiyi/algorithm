//
//  AddTwoNumbers.cpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/4.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "AddTwoNumbers.hpp"

void Solution_2::test(){
    ListNode *node1 = new ListNode(2);
    ListNode *node2 = new ListNode(4);
    ListNode *node3 = new ListNode(3);
    
    node1->next = node2;
    node2->next = node3;
    
    
    ListNode *node4 = new ListNode(5);
    ListNode *node5 = new ListNode(6);
    ListNode *node6 = new ListNode(4);
    
    node4->next = node5;
    node5->next = node6;
    
    ListNode *node = addTwoNumbers(node1, node4);
    ListNode *r = node;
    while (r) {
        printf("%d\n",r->val);
        r = r->next;
    }
    
}
