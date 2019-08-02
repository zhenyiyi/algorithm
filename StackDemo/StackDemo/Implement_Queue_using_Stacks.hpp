//
//  Implement_Queue_using_Stacks.hpp
//  StackDemo
//
//  Created by fenglin on 2019/7/9.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Implement_Queue_using_Stacks_hpp
#define Implement_Queue_using_Stacks_hpp

#include <stdio.h>
/*
 使用栈实现队列的下列操作：
 
 push(x) -- 将一个元素放入队列的尾部。
 pop() -- 从队列首部移除元素。
 peek() -- 返回队列首部的元素。
 empty() -- 返回队列是否为空。
 示例:
 
 MyQueue queue = new MyQueue();
 
 queue.push(1);
 queue.push(2);
 queue.peek();  // 返回 1
 queue.pop();   // 返回 1
 queue.empty(); // 返回 false
 说明:
 
 你只能使用标准的栈操作 -- 也就是只有 push to top, peek/pop from top, size, 和 is empty 操作是合法的。
 你所使用的语言也许不支持栈。你可以使用 list 或者 deque（双端队列）来模拟一个栈，只要是标准的栈操作即可。
 假设所有操作都是有效的 （例如，一个空的队列不会调用 pop 或者 peek 操作）。
 
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/implement-queue-using-stacks
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

#include <stack>
using namespace std;

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        m_intputStack.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int top = -1;
        if (!m_outputStack.empty()) {
            top = m_outputStack.top();
            m_outputStack.pop();
        }else if (!m_intputStack.empty()) {
            while (!m_intputStack.empty()) {
                int topTemp = m_intputStack.top();
                m_outputStack.push(topTemp);
                m_intputStack.pop();
            }
            if (!m_outputStack.empty()) {
                top = m_outputStack.top();
                m_outputStack.pop();
            }
        }
        return top;
    }
    
    /** Get the front element. */
    int peek() {
        int top = -1;
        if (!m_outputStack.empty()) {
            top = m_outputStack.top();
        }else {
            while (!m_intputStack.empty()) {
                int topTemp = m_intputStack.top();
                m_outputStack.push(topTemp);
                m_intputStack.pop();
            }
            if (!m_outputStack.empty()) {
                top = m_outputStack.top();
            }
        }
        return top;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return  m_intputStack.empty() && m_outputStack.empty();
    }
private:
    stack<int> m_intputStack;
    stack<int> m_outputStack;
};

#endif /* Implement_Queue_using_Stacks_hpp */
