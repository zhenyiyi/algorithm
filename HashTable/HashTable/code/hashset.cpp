//
//  hashset.cpp
//  HashTable
//
//  Created by fenglin on 2019/7/11.
//  Copyright © 2019 张枫林. All rights reserved.
//

#include "hashset.hpp"
#include <iostream>
#include <set>
#include <unordered_set>

// 为什么set能保持有序，因为底层基于RB-Tree，天然的有序结构，而unordered_set底层则是hashtable
/*
 作者：NearXDU
 来源：CSDN
 原文：https://blog.csdn.net/zhangxiao93/article/details/74357101
 版权声明：本文为博主原创文章，转载请附上博文链接！
 */

using namespace std;

void testhashset(){
    set<int>s1;
    unordered_set<int>s2;
    s1.insert(4);
    s1.insert(2);
    s1.insert(3);
    s1.insert(1);
    s2.insert(4);
    s2.insert(2);
    s2.insert(3);
    s2.insert(1);
    s2.insert(15);
    for(auto it=s1.begin();it!=s1.end();++it)
        cout<<*it<<" ";
    cout<<endl;
    for(auto it=s2.begin();it!=s2.end();++it)
        cout<<*it<<" ";
    cout<<endl;
}


