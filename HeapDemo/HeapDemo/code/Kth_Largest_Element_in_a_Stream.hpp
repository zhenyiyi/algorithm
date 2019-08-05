//
//  Kth_Largest_Element_in_a_Stream.hpp
//  LinkedMap
//
//  Created by 张枫林 on 2019/7/9.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Kth_Largest_Element_in_a_Stream_hpp
#define Kth_Largest_Element_in_a_Stream_hpp

#include <stdio.h>
/*
 设计一个找到数据流中第K大元素的类（class）。注意是排序后的第K大元素，不是第K个不同的元素。
 
 你的 KthLargest 类需要一个同时接收整数 k 和整数数组nums 的构造器，它包含数据流中的初始元素。每次调用 KthLargest.add，返回当前数据流中第K大的元素。
 
 示例:
 
 int k = 3;
 int[] arr = [4,5,8,2];
 KthLargest kthLargest = new KthLargest(3, arr);
 kthLargest.add(3);   // returns 4
 kthLargest.add(5);   // returns 5
 kthLargest.add(10);  // returns 5
 kthLargest.add(9);   // returns 8
 kthLargest.add(4);   // returns 8
 说明:
 你可以假设 nums 的长度≥ k-1 且k ≥ 1。
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/kth-largest-element-in-a-stream
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

/*
 
 
 greater是升序排列，后面的大于前面的
 
 less是降序排列，后面的小于前面的
 
 在初始化优先级队列时默认是less
 
 priority_queue<int,vector<int>,less<int> > que与priority_queue<int > que是一样的效果
 
 
 priority_queue使用详解
 
 https://blog.csdn.net/jiayizhenzhenyijia/article/details/79908690
 */
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
class KthLargest {
public:
    KthLargest(){
        
    }
    KthLargest(int k, vector<int>& nums) {
        maxSize = k;
        for (auto num : nums) {
            add(num);
        }
    }
    
    int add(int val) {
        if (queue.size() < maxSize) {
            queue.push(val);
        }else if (queue.top() < val){
            queue.pop();
            queue.push(val);
        }
        return queue.top();
    }
private:
    priority_queue<int, vector<int>, greater<int> > queue; ///< 用的是小顶堆
    int maxSize;
    
public:
 
 };

class KthLargestV2 {
    
    
public:
    KthLargestV2(int k, vector<int> &nums){
        maxSize = k;
        _nums = nums;
        // 建堆
        make_heap(_nums.begin(), _nums.end(), greater<int>());
    }
    int add(int val){
        // 添加元素
        _nums.push_back(val);
        // 堆化
        push_heap(_nums.begin(), _nums.end(), greater<int>());
        
        // 删除堆顶元素 删除前 size -k 个元素，那个堆顶就是 第 k
        while (_nums.size() > maxSize) {
            pop_heap(_nums.begin(), _nums.end(), greater<int>());
            _nums.pop_back();
        }
        return _nums[0];
    }
private:
    int maxSize;
    vector<int> _nums;
};

void test();

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

#endif /* Kth_Largest_Element_in_a_Stream_hpp */
