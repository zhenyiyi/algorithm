//
//  DesignLinkedList.cpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/5.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "DesignLinkedList.hpp"

void MyLinkedList::test(){
    MyLinkedList *obj = new MyLinkedList();
    obj->addAtHead(10);
    printf("%d\n",obj->size);
    ListNode *r = obj->head;
    while (r) {
        printf("%d\n",r->val);
        r = r->next;
    }
    printf("addAtTail\n");
    obj->addAtTail(20);
    r = obj->head;
    while (r) {
        printf("%d\n",r->val);
        r = r->next;
    }
    
    printf("deleteAtIndex\n");
    obj->deleteAtIndex(1);
    obj->deleteAtIndex(0);
    r = obj->head;
    while (r) {
        printf("%d\n",r->val);
        r = r->next;
    }
    int ret = obj->get(0);
    printf("get\n");
    printf("ret-> %d\n",ret);
    
    obj->addAtIndex(0, 10);
    obj->addAtIndex(0, 20);
    obj->addAtIndex(0, 30);
    printf("addAtIndex");
    r = obj->head;
    while (r) {
        printf("%d\n",r->val);
        r = r->next;
    }
    
    ret = obj->get(1);
    printf("get 2\n");
    printf("ret-> %d\n",ret);
}
