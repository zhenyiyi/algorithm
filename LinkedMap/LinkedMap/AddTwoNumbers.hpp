//
//  AddTwoNumbers.hpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/4.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef AddTwoNumbers_hpp
#define AddTwoNumbers_hpp

#include <stdio.h>
#include "LinkedList.h"

/*
 Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 Output: 7 -> 0 -> 8
 Explanation: 342 + 465 = 807.
 */


class Solution_2 {
    
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){
        int carry = 0;
        ListNode *list = new ListNode(0);
        ListNode * ret = list; // 临时变量指向当前链表
        while (l1 || l2 || carry >0 ) {
            int a = 0;
            if (l1) a = l1->val;
            int b = 0;
            if (l2) b = l2->val;
            int sum = a + b + carry;
            carry = (sum) / 10;
            ret->next = new ListNode(sum % 10); // 赋值
            ret = ret->next;// 指向下一个变量
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        return list->next;
    }
    
    void test();
};

#endif /* AddTwoNumbers_hpp */
