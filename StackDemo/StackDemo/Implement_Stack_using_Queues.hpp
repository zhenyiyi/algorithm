//
//  Implement_Stack_using_Queues.hpp
//  LinkedMap
//
//  Created by 张枫林 on 2019/7/9.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Implement_Stack_using_Queues_hpp
#define Implement_Stack_using_Queues_hpp

#include <stdio.h>
#include <queue>

using namespace std;

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        nums.push(x);
        for (int i=0; i<nums.size()-1; i++) {
            nums.push(nums.front());
            nums.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int top = nums.front();
        nums.pop();
        return top;
    }
    
    /** Get the top element. */
    int top() {
        return nums.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return nums.empty();
    }
private:
    queue<int> nums;
public:
    void test();
};
#endif /* Implement_Stack_using_Queues_hpp */
