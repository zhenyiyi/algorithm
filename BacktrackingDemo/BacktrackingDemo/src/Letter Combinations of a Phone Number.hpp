//
//  Letter Combinations of a Phone Number.hpp
//  BacktrackingDemo
//
//  Created by 张枫林 on 2019/8/8.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Letter_Combinations_of_a_Phone_Number_hpp
#define Letter_Combinations_of_a_Phone_Number_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include <map>

using namespace std;


class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.length()==0) {
            return {};
        }
        dict["2"] = "abc";
        dict["3"] = "def";
        dict["4"] = "ghi";
        dict["5"] = "jkl";
        dict["6"] = "mno";
        dict["7"] = "pqrs";
        dict["8"] = "tuv";
        dict["9"] = "wxyz";
        backtrack("", digits);
        return result;
    }
    
    void backtrack(string combination, string nextDigits){
        if (nextDigits.length() == 0) {
            result.push_back(combination);
            return;
        }
        // 取到第一个数字
        string digit = nextDigits.substr(0,1);
        // 获取对应的字母
        string letters = dict[digit];
        // 遍历每一个字母
        for (int i=0; i< letters.length(); i++) {
            string letter = letters.substr(i,1);
            backtrack(combination+letter, nextDigits.substr(1));
        }
    }
private:
    vector<string> result;
    map<string, string> dict;
};

/*
 3
 */
#endif /* Letter_Combinations_of_a_Phone_Number_hpp */
