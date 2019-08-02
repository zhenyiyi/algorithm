//
//  MiddleOfTheLinkedList.cpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/4.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "MiddleOfTheLinkedList.hpp"

void Soultion_876::test(){
    
    {
        ListNode *node1 = new ListNode(2);
        ListNode *node2 = new ListNode(4);
        ListNode *node3 = new ListNode(3);
        
        node1->next = node2;
        node2->next = node3;
        
        ListNode *node = middleNode(node1);
        ListNode *r = node;
        while (r) {
            printf("%d\n",r->val);
            r = r->next;
        }
    }
    
    {
        ListNode *node1 = new ListNode(1);
        ListNode *node2 = new ListNode(2);
        ListNode *node3 = new ListNode(3);
        ListNode *node4 = new ListNode(4);
        ListNode *node5 = new ListNode(5);
        ListNode *node6 = new ListNode(6);
        
        node1->next = node2;
        node2->next = node3;
        node3->next = node4;
        node4->next = node5;
        node5->next = node6;
        
        ListNode *node = middleNode(node1);
        ListNode *r = node;
        while (r) {
            printf("%d\n",r->val);
            r = r->next;
        }
    }
    
    
    
    
}
