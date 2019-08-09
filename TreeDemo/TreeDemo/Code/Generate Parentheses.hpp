//
//  Generate Parentheses.hpp
//  TreeDemo
//
//  Created by 张枫林 on 2019/8/4.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Generate_Parentheses_hpp
#define Generate_Parentheses_hpp

/*
 22. 括号生成
 
 给出 n 代表生成括号的对数，请你写出一个函数，使其能够生成所有可能的并且有效的括号组合。
 
 例如，给出 n = 3，生成结果为：
 
 [
 "((()))",
 "(()())",
 "(())()",
 "()(())",
 "()()()"
 ]
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/generate-parentheses
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include <stdio.h>
#include <vector>
#include <string>


using namespace std;

/*
 * 运用到剪枝思想。回溯算法
 */
class Solution_22 {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generateParenthesisImp(result, 0, 0, n, "");
        return result;
    }
    
    // 为什么 用 str.append 返回有问题？
    void generateParenthesisImp(vector<string> &result, int leftUsed, int rightUsed, int num, string str){
        // 终止条件,如果左右括号都达到 num 个
        if (leftUsed == num && rightUsed == num) {
            result.push_back(str);
            return;
        }
        if (leftUsed < num) {
            generateParenthesisImp(result, leftUsed + 1, rightUsed, num, str + "(");
        }
        if (rightUsed < num && leftUsed > rightUsed) {
            generateParenthesisImp(result, leftUsed, rightUsed+1, num, str + ")");
        }
    }
};

void testGenerateParenthesis();

#endif /* Generate_Parentheses_hpp */
