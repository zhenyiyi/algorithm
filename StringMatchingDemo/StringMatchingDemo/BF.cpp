//
//  BF.cpp
//  StringMatchingDemo
//
//  Created by fenglin on 2019/8/6.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "BF.hpp"
#include <string>
#include <cmath>
#include <vector>


using namespace std;

int bfSearch(string main, string pattern);

void testStringFindFunction(){
    string s1 = "adsadadafaheajldajsdla";
    string s2 = "sa";
    size_t index =  s1.find(s2);
    if (index != s1.npos) {
        printf("index1-> %zu\n",index);
    }
    
    index = bfSearch(s1, s2);
    
    if (index != s1.npos) {
        printf("index2-> %zu\n",index);
    }
}


int bfSearch(string main, string pattern){
    if (main.size() == 0 || pattern.size() == 0 || main.size() < pattern.size()) {
        return -1;
    }
    int Pos = -1;
    for (int i=0; i<(main.size()-pattern.size()+1); i++) {
        string subStr = main.substr(i, pattern.size());
        if (subStr == pattern) {
            Pos = i;
            break;
        }
    }
    return Pos;
}


int rkSearch(string main, string pattern){
    if (main.size() == 0 || pattern.size() == 0 || main.size() < pattern.size()) {
        return -1;
    }
    
    vector<int> arr = {static_cast<int>(pow(26, 0)),pow(26, 0),pow(26, 0),pow(26, 0),pow(26, 0),pow(26, 0),pow(26, 0),pow(26, 0),pow(26, 0),pow(26, 0),pow(26, 0),pow(26, 0),pow(26, 0)};
    
    return -1;
}
