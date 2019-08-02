//
//  Sliding_Window_Maximum.hpp
//  StackDemo
//
//  Created by fenglin on 2019/7/10.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Sliding_Window_Maximum_hpp
#define Sliding_Window_Maximum_hpp

#include <stdio.h>
/*
 给定一个数组 nums，有一个大小为 k 的滑动窗口从数组的最左侧移动到数组的最右侧。你只可以看到在滑动窗口 k 内的数字。滑动窗口每次只向右移动一位。
 
 返回滑动窗口最大值。
 
 示例:
 
 输入: nums = [1,3,-1,-3,5,3,6,7], 和 k = 3
 输出: [3,3,5,5,6,7]
 解释:
 
 滑动窗口的位置                最大值
 ---------------               -----
 [1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7
 注意：
 
 你可以假设 k 总是有效的，1 ≤ k ≤ 输入数组的大小，且输入数组不为空。
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/sliding-window-maximum
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 
 作者：labuladong
 链接：https://leetcode-cn.com/problems/two-sum/solution/dan-diao-dui-lie-by-labuladong/
 来源：力扣（LeetCode）
 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

 
 */
#include <vector>
#include <queue>

using namespace std;

class MonotonicQueue {
    
public:
    // 在队尾添加元素 n
    void push(int n){
        while (!data.empty() && data.back() < n) {
            data.pop_back();
        }
        data.push_back(n);
    }
    // 返回当前队列中的最大值
    int max(){
        return data.front();
    }
    // 队头元素如果是 n，删除它
    void pop(int n){
        if (data.front() == n) {
            data.pop_front();
        }
    }
private:
    deque<int> data;
};

class Solution_239 {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        MonotonicQueue window;
        for (int i=0; i<nums.size(); i++) {
            if (i < k-1 ) {
                window.push(nums[i]);
            }else{
                window.push(nums[i]);
                res.push_back(window.max());
                window.pop(nums[i-k+1]);
            }
        }
        return res;
    }
    void test();
};
#endif /* Sliding_Window_Maximum_hpp */
