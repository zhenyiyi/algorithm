//
//  ValidParentheses.cpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/9.
//  Copyright © 2019 quanshi. All rights reserved.
//


#include "ValidParentheses.hpp"

void Solution_20::test(){
    string s1 = "()";
    string s2 = "()[]{}";
    string s3 = "([)]";
    string s4 = "{[]}";
    printf("%d\n",isValid(s1));
    printf("%d\n",isValid(s2));
    printf("%d\n",isValid(s3));
    printf("%d\n",isValid(s4));
}
