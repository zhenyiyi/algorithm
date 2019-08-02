//
//  ValidParentheses.hpp
//  LinkedMap
//
//  Created by fenglin on 2019/7/9.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef ValidParentheses_hpp
#define ValidParentheses_hpp

/*
 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
 
 有效字符串需满足：
 
 左括号必须用相同类型的右括号闭合。
 左括号必须以正确的顺序闭合。
 注意空字符串可被认为是有效字符串。
 
 示例 1:
 
 输入: "()"
 输出: true
 示例 2:
 
 输入: "()[]{}"
 输出: true
 示例 3:
 
 输入: "(]"
 输出: false
 示例 4:
 
 输入: "([)]"
 输出: false
 示例 5:
 
 输入: "{[]}"
 输出: true
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/valid-parentheses
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

#include <stdio.h>
#include <string>
#include <stack>
#include <map>

using namespace std;
class Solution_20 {
    
    
public:
    bool isValid(string s){
        stack<char> st;
        for (auto ch : s) {
//            printf("st.empty() == %d", st.empty());
            if (ch == '{' || ch == '[' || ch == '(') {
                st.push(ch);
            }else if (ch == '}' || ch == ']' || ch == ')'){
                if (st.empty()) {
                    return false;
                }
                if ((ch == '}' && st.top() == '{') ||
                    (ch == ']' && st.top() == '[') ||
                    (ch == ')' && st.top() == '(')) {
                    st.pop();
                    continue;
                }
                return false;
            }else{
                return false;
            }
        }
        return st.empty();
    }
    
    void test();
};


#endif /* ValidParentheses_hpp */
