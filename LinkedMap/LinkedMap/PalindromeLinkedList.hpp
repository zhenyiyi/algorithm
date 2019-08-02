//
//  PalindromeLinkedList.hpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/5.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef PalindromeLinkedList_hpp
#define PalindromeLinkedList_hpp

#include <stdio.h>
/*请判断一个链表是否为回文链表。
 
 示例 1:
 
 输入: 1->2
 输出: false
 示例 2:
 
 输入: 1->2->2->1
 输出: true
 进阶：
 你能否用 O(n) 时间复杂度和 O(1) 空间复杂度解决此题？
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/palindrome-linked-list
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

#include "LinkedList.h"

class Solution_234 {
    
    
public:
    
    ListNode* reverseList(ListNode *head){
        ListNode *cur = head;
        ListNode *pre = NULL;
        while (cur) {
            ListNode *nextTemp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nextTemp;
        }
        return pre;
    }
    
    bool isPalindrome(ListNode* head) {
        
        ListNode *fast = head;
        ListNode *slow = head;
        
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *reverse = reverseList(slow);
        while (reverse) {
            if (head->val != reverse->val) {
                return false;
            }
            head = head->next;
            reverse = reverse->next;
        }
        return true;
    }
    
    void test();
};

#endif /* PalindromeLinkedList_hpp */
