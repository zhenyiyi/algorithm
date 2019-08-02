//
//  RemoveDuplicatesfromSortedList.hpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/5.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef RemoveDuplicatesfromSortedList_hpp
#define RemoveDuplicatesfromSortedList_hpp
/*
 给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
 
 Example 1:
 
 Input: 1->1->2
 Output: 1->2
 Example 2:
 
 Input: 1->1->2->3->3
 Output: 1->2->3
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include <stdio.h>
#include "LinkedList.h"

class Solution_83 {
    
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *current = new ListNode(0);
        current->next = head;
        ListNode *p = current->next;
        while (p && p->next) {
            if (p->val == p->next->val) {
                p->next = p->next->next;
                continue;
            }
            p = p->next;
        }
        return current->next;
    }
    void test();
};
#endif /* RemoveDuplicatesfromSortedList_hpp */
