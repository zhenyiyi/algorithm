//
//  ReverseLinkedList.hpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/4.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef ReverseLinkedList_hpp
#define ReverseLinkedList_hpp

#include <stdio.h>
#include "LinkedList.h"


/*
 Input: 1->2->3->4->5->NULL
 Output: 5->4->3->2->1->NULL
 */
class Solution_206 {
    
    
public:
    ListNode* reverseList(ListNode *head){
        
        ListNode *pre = nullptr;
        ListNode *cur = head;
        // 在遍历列表时，将当前节点的 next 指针改为指向前一个元素
        while (cur) {
            // 先保存当前节点的下一个指针
            ListNode *nextTemp = cur->next;
            // 当前 节点 指向前一个节点
            cur->next = pre;
            // 用前一个节点 指向 当前节点
            pre = cur;
            // 当前节点 指向下一个节点
            cur = nextTemp;
        }
        return pre;
    }
    void test();
};



#endif /* ReverseLinkedList_hpp */
