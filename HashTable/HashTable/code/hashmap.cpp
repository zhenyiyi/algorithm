//
//  hashmap.cpp
//  HashTable
//
//  Created by fenglin on 2019/7/11.
//  Copyright © 2019 张枫林. All rights reserved.
//

#include "hashmap.hpp"
#include <map>
#include <iostream>
#include <unordered_map>

/*
 https://blog.csdn.net/qq_21567767/article/details/81709452
 
 */
using namespace std;

void testmap(){
    
    printf("%s\n",__func__);
    map<string, string> dict;
    map<string, string>::iterator it;
    dict["A"] = "A";
    dict["F"] = "F";
    dict["Z"] = "Z";
    dict["B"] = "B";
    dict["C"] = "C";
    
    it = dict.begin();
    while (it != dict.end()) {
        std::cout << it->first << " " << it->second << std::endl;
        ++it;
    }
}

void testunordered_map(){
    printf("%s\n",__func__);
    unordered_map<string, string> dict;
    unordered_map<string, string>::iterator it;
    dict["A"] = "A";
    dict["F"] = "F";
    dict["Z"] = "Z";
    dict["B"] = "B";
    dict["C"] = "C";
    
    it = dict.begin();
    while (it != dict.end()) {
        std::cout << it->first << " " << it->second << std::endl;
        ++it;
    }
}
