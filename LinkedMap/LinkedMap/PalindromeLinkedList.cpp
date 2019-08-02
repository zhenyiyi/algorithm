//
//  PalindromeLinkedList.cpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/5.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "PalindromeLinkedList.hpp"

void Solution_234::test(){
    {
        ListNode *node4 = new ListNode(1);
        ListNode *node5 = new ListNode(2);
        ListNode *node6 = new ListNode(2);
        ListNode *node7 = new ListNode(1);
        node4->next = node5;
        node5->next = node6;
        node6->next = node7;
        bool ret =isPalindrome(node4);
        printf("ret == %d", ret);
    }
    
    {
        ListNode *node4 = new ListNode(1);
        ListNode *node5 = new ListNode(2);
        ListNode *node6 = new ListNode(1);
        node4->next = node5;
        node5->next = node6;
        bool ret =isPalindrome(node4);
        printf("ret == %d", ret);
    }
    {
        ListNode *node4 = new ListNode(0);
        ListNode *node5 = new ListNode(2);
        node4->next = node5;
        bool ret =isPalindrome(node4);
        printf("ret == %d", ret);
    }
}
