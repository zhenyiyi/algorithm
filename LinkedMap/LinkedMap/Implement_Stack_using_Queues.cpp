//
//  Implement_Stack_using_Queues.cpp
//  LinkedMap
//
//  Created by 张枫林 on 2019/7/9.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "Implement_Stack_using_Queues.hpp"

void MyStack::test(){
    MyStack* obj = new MyStack();
    obj->push(6);
    int param_3 = obj->top();
    int param_2 = obj->pop();
    
    bool param_4 = obj->empty();
    printf("%d-%d-%d",param_2,param_3,param_4);
}
