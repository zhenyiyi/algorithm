//
//  Valid Anagram.hpp
//  HashTable
//
//  Created by 张枫林 on 2019/7/10.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef Valid_Anagram_hpp
#define Valid_Anagram_hpp

#include <stdio.h>
/*
 给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。
 
 示例 1:
 
 输入: s = "anagram", t = "nagaram"
 输出: true
 示例 2:
 
 输入: s = "rat", t = "car"
 输出: false
 说明:
 你可以假设字符串只包含小写字母。
 
 进阶:
 如果输入字符串包含 unicode 字符怎么办？你能否调整你的解法来应对这种情况？
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/valid-anagram
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

#include <string>
#include <map>
using namespace std;

class Solution_242 {
public:
    bool isAnagram(string s, string t) {
        if (s == t) {
            return true;
        }
        map<char, int> dict1;
        map<char, int> dict2;
        for (auto ch : s) {
            dict1[ch] += 1;
        }
        map<char, int>::iterator iter = dict1.find('H');
        if (iter != dict1.end()) {
            printf("iter.second == %d\n",iter->second);
        }
        for (auto ch : t) {
            dict2[ch] += 1;
        }
        if (dict1.size() != dict2.size()) {
            return false;
        }
        
        for (auto item : dict1) {
            printf("%c %d %d \n",item.first, item.second, dict2[item.first]);
            if (item.second != dict2[item.first]) {
                return false;
            }
        }
        return true;
    }
};

#endif /* Valid_Anagram_hpp */
