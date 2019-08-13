//
//  Reverse Linked List II.cpp
//  LinkedMap
//
//  Created by 张枫林 on 2019/8/13.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "Reverse Linked List II.hpp"

void Solution_92::test(){
    ListNode *root = new ListNode(1);
    ListNode *node2 = new ListNode(2);
    ListNode *node3 = new ListNode(3);
    ListNode *node4 = new ListNode(4);
    ListNode *node5 = new ListNode(5);
    root->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    
    ListNode * ret = reverseBetween(root, 2, 4);
    
    while (ret) {
        printf("%d->",ret->val);
        ret = ret->next;
    }
}
