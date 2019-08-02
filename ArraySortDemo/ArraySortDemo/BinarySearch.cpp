//
//  BinarySearch.cpp
//  ArraySortDemo
//
//  Created by 张枫林 on 2019/7/23.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "BinarySearch.hpp"
#include <math.h>


double mySqrtImp(double num){
    double low = 0;
    double height = num;
    double mid = (height + low)/2.0;
    while (abs(mid * mid - num) > 0.00001) {
        if (mid * mid > num) {
            height = mid;
        }else{
            low = mid;
        }
         mid = (height + low)/2.0;
    }
    return mid;
}

double mySqrt(double num){
    return mySqrtImp(num);
}

