//
//  MinStack.hpp
//  StackDemo
//
//  Created by fenglin on 2019/7/9.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef MinStack_hpp
#define MinStack_hpp

#include <stdio.h>
#include <stack>

using namespace std;



class MinStack{

public:
    void test();
public:
    
    struct MinData{
        int minData;
        int refCount;
        MinData(int v, int c):minData(v),refCount(c){};
    };
    
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void  push(int x) {
        if (dataStack.empty()) {
            _min = x;
            minStack.push(new MinData(x, 1));
        }else{
            if (_min >= x){
                _min = x;
                if (minStack.top()->minData == x) {
                    minStack.top()->refCount++;
                }else{
                    minStack.push(new MinData(x, 1));
                }
            }
        }
        dataStack.push(x);
    }
    
    void pop() {
        if (dataStack.empty()) {
            return;
        }
        int topVal = dataStack.top();
        dataStack.pop();
        if (!minStack.empty()) {
            if (topVal == minStack.top()->minData) {
                if (minStack.top()->refCount > 1) {
                    minStack.top()->refCount-- ;
                }else{
                    minStack.pop();
                    _min = minStack.top()->minData;
                }
            }
        }
    }
    
    int top() {
        return dataStack.top();
    }
    
    int getMin() {
        return _min;
    }
private:
    stack<int> dataStack;
    stack<MinData *> minStack;
    int _min;
};
#endif /* MinStack_hpp */
