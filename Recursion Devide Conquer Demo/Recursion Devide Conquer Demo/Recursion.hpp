//
//  Recursion.hpp
//  Recursion Devide Conquer Demo
//
//  Created by fenglin on 2019/7/15.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Recursion_hpp
#define Recursion_hpp

#include <stdio.h>

class Recursion {
    
public:
//    N 的阶乘
    int factorial(int n){
        if (n == 1) {
            return 1;
        }
        return n * factorial(n-1);
    }
//    斐波拉契
    int fib(int n){
        if (n == 0 || n == 1) {
            return n;
        }
        return fib(n-1) + fib(n-2);
    }
};
#endif /* Recursion_hpp */
