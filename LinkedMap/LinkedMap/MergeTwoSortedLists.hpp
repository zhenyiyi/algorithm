//
//  MergeTwoSortedLists.hpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/5.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef MergeTwoSortedLists_hpp
#define MergeTwoSortedLists_hpp

#include <stdio.h>
#include "LinkedList.h"

class Solution_21 {
    
public:
    ListNode* mergeTwoSortedLists(ListNode *l1, ListNode *l2){
        ListNode *node = new ListNode(0);
        ListNode *re = node; // 先用临时变量指向他
        while (l1 && l2) {
            int value ;
            if (l1->val < l2->val) {
                value = l1->val;
                l1 = l1->next;
            }else{
                value = l2->val;
                l2 = l2->next;
            }
            re->next = new ListNode(value);
            re = re->next;
            
        }
        if (l1) {
            re->next = l1;
        }else if (l2) {
            re->next = l2;
        }
        return node->next;
    }
    void test();
};

#endif /* MergeTwoSortedLists_hpp */
