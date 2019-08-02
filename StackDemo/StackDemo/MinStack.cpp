//
//  MinStack.cpp
//  StackDemo
//
//  Created by fenglin on 2019/7/9.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "MinStack.hpp"

void MinStack::test(){
    MinStack* obj = new MinStack();
    obj->push(5);
    obj->push(8);
    obj->push(3);
    obj->pop();
    int param_3 = obj->top();
    obj->push(0);
    int param_4 = obj->getMin();
    printf("param_3 == %d, param_4 == %d",param_3,param_4);
}
