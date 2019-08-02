//
//  DesignLinkedList.hpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/5.
//  Copyright © 2019 quanshi. All rights reserved.
//  https://leetcode-cn.com/problems/design-linked-list/

#ifndef DesignLinkedList_hpp
#define DesignLinkedList_hpp

#include <stdio.h>
#include "LinkedList.h"

class MyLinkedList {
public:
    MyLinkedList(){
        // 创建个哨兵
        head = new ListNode(0);
        size = 0;
    }
    int get(int index){
        ListNode *node = getListNode(index);
        if (node == nullptr) {
            printf("beyond of the bound");
            return -1;
        }
        return node->val;
    }
    void addAtHead(int val){
        ListNode *node = new ListNode(val);
        // head->next 相当于链表的头部
        node->next = head->next;
        head->next = node;
        size += 1;
    }
    void addAtTail(int val){
        ListNode *lastNode = getListNode(size-1);
        lastNode->next = new ListNode(val);
        size += 1;
    }
    void addAtIndex(int index, int val) {
        ListNode *last = getListNode(index-1);
        ListNode *cur = getListNode(index);
        ListNode *node = new ListNode(val);
        node->next = cur;
        last->next = node;
        size += 1;
        
    }
    void deleteAtIndex(int index) {
        ListNode *node = getListNode(index-1);
        if (node == nullptr) {
            return;
        }
        node->next = node->next->next;
        delete node->next;
        size -= 1;
    }
    void test();
public:
    ListNode *head;
    int size;
private:
    ListNode * getListNode(int index){
        if (index < -1 || index > size-1) {
            return nullptr;
        }
        ListNode *p = head;
        int tempIndex = -1;
        while (index != tempIndex && p) {
            tempIndex += 1;
            p = p->next;
        }
        return p;
    }
};
#endif /* DesignLinkedList_hpp */
