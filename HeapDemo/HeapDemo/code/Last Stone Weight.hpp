//
//  Last Stone Weight.hpp
//  HeapDemo
//
//  Created by 张枫林 on 2019/8/5.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Last_Stone_Weight_hpp
#define Last_Stone_Weight_hpp

#include <stdio.h>
/*
 有一堆石头，每块石头的重量都是正整数。
 
 每一回合，从中选出两块最重的石头，然后将它们一起粉碎。假设石头的重量分别为 x 和 y，且 x <= y。那么粉碎的可能结果如下：
 
 如果 x == y，那么两块石头都会被完全粉碎；
 如果 x != y，那么重量为 x 的石头将会完全粉碎，而重量为 y 的石头新重量为 y-x。
 最后，最多只会剩下一块石头。返回此石头的重量。如果没有石头剩下，就返回 0。
 
  
 
 提示：
 
 1 <= stones.length <= 30
 1 <= stones[i] <= 1000
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/last-stone-weight
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

class Solution_1046 {
public:
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size() == 1) {
            return stones.front();
        }
        // 建一个小顶堆
        make_heap(stones.begin(), stones.end(), greater<int>());
        while (true) {
            int first =  stones.front();
            int last = stones.back();
            int temp = last - first;
            if (temp > 0) {
                // 把堆顶元素放到 vector 最后
                pop_heap(stones.begin(), stones.end(), greater<int>());
                // 删除最后一个元素
                stones.pop_back();
                stones.back() = temp;
                push_heap(stones.begin(), stones.end(), greater<int>());
            }else if(temp == 0 && stones.size() > 1){
                // 删除堆顶元素
                pop_heap(stones.begin(), stones.end(), greater<int>());
                stones.pop_back();
                stones.pop_back();
            }
            if (stones.size() <= 1) {
                break;
            }
        }
        return stones.size() ? stones.front() : 0;
    }
};
void testLastStoneWeight();

#endif /* Last_Stone_Weight_hpp */
