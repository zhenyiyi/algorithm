//
//  RemoveDuplicatesfromSortedList.cpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/5.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "RemoveDuplicatesfromSortedList.hpp"
void Solution_83::test(){
//    {
//        ListNode *node4 = new ListNode(5);
//        ListNode *node5 = new ListNode(6);
//        ListNode *node6 = new ListNode(6);
//        ListNode *node7 = new ListNode(13);
//        ListNode *node8 = new ListNode(13);
//        ListNode *node9 = new ListNode(13);
//        ListNode *node10 = new ListNode(17);
//        node4->next = node5;
//        node5->next = node6;
//        node6->next = node7;
//        node7->next = node8;
//        node8->next = node9;
//        node9->next = node10;
//        
//        ListNode *node =deleteDuplicates(node4);
//        ListNode *r = node;
//        while (r) {
//            printf("%d\n",r->val);
//            r = r->next;
//        }
//    }
//    
//    {
//        printf("---------");
//        ListNode *node4 = new ListNode(1);
//        ListNode *node5 = new ListNode(1);
//        ListNode *node6 = new ListNode(1);
//        ListNode *node7 = new ListNode(1);
//        node4->next = node5;
//        node5->next = node6;
//        node6->next = node7;
//        ListNode *node =deleteDuplicates(node4);
//        ListNode *r = node;
//        while (r) {
//            printf("%d\n",r->val);
//            r = r->next;
//        }
//    }
    
    {
        printf("---------");
        ListNode *node4 = new ListNode(0);
        ListNode *node5 = new ListNode(0);
        ListNode *node6 = new ListNode(0);
        ListNode *node7 = new ListNode(0);
        node4->next = node5;
        node5->next = node6;
        node6->next = node7;
        ListNode *node =deleteDuplicates(node4);
        ListNode *r = node;
        while (r) {
            printf("%d\n",r->val);
            r = r->next;
        }
    }
}
