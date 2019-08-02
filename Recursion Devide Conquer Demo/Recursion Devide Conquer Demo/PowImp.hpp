//
//  PowImp.hpp
//  Recursion Devide Conquer Demo
//
//  Created by fenglin on 2019/7/15.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef PowImp_hpp
#define PowImp_hpp
/*
 实现 pow(x, n) ，即计算 x 的 n 次幂函数。
 
 示例 1:
 
 输入: 2.00000, 10
 输出: 1024.00000
 示例 2:
 
 输入: 2.10000, 3
 输出: 9.26100
 示例 3:
 
 输入: 2.00000, -2
 输出: 0.25000
 解释: 2-2 = 1/22 = 1/4 = 0.25
 说明:
 
 -100.0 < x < 100.0
 n 是 32 位有符号整数，其数值范围是 [−231, 231 − 1] 。
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/powx-n
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include <stdio.h>


class Solution_50 {
public:
    double myPow(double x, int n) {
        long N = n;
        if (N < 0) {
            x = 1/x;
            N = -N;
        }
        return fastPow(x, N);
    }
    
    double myPowV2(double x, int n) {
        long N = n;
        if (N < 0) {
            N = -N;
            x = 1/x;
        }
        double res = 1.0;
        for (int i=0; i<N; i++) {
            res = res * x;
        }
        return res;
    }
    
    
    double fastPow(double x, long n){
        if (n == 0) {
            return 1.0;
        }
        double halfval = fastPow(x, n / 2);
        if (n % 2 == 0) {
            return halfval * halfval;
        }else{
            return halfval * halfval * x;
        }
    }
};

void testMyPow();

#endif /* PowImp_hpp */
