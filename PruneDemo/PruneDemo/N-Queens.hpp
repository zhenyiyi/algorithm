//
//  N-Queens.hpp
//  PruneDemo
//
//  Created by 张枫林 on 2019/8/4.
//  Copyright © 2019 张枫林. All rights reserved.
//

#ifndef N_Queens_hpp
#define N_Queens_hpp
/*
 n 皇后问题研究的是如何将 n 个皇后放置在 n×n 的棋盘上，并且使皇后彼此之间不能相互攻击。
 
 
 
 上图为 8 皇后问题的一种解法。
 
 给定一个整数 n，返回所有不同的 n 皇后问题的解决方案。
 
 每一种解法包含一个明确的 n 皇后问题的棋子放置方案，该方案中 'Q' 和 '.' 分别代表了皇后和空位。
 
 示例:
 
 输入: 4
 输出: [
 [".Q..",  // 解法 1
 "...Q",
 "Q...",
 "..Q."],
 
 ["..Q.",  // 解法 2
 "Q...",
 "...Q",
 ".Q.."]
 ]
 解释: 4 皇后问题存在两个不同的解法。
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/n-queens
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include <stdio.h>
#include <vector>
#include <string>
#include <set>


using namespace std;

class Solution_51 {
public:
    vector<vector<string>> solveNQueens(int n) {
        dfs(n, 0, {});
        return {};
    }
    
    void dfs(int n, int row, vector<int> curState){
        // 终止条件
        if (row >= n) {
            result.push_back(curState);
            return;
        }
        // 遍历每一列
        for (int col=0; col<n; col++) {
            if (cols.find(col) != cols.end() ||
                pieQueens.find(col + row) != pieQueens.end() ||
                naQueens.find(col - row) != naQueens.end()) {
                continue;
            }
            cols.insert(col);
            pieQueens.insert(col + row);
            naQueens.insert(col - row);
            
            // 继续往下搜索
            curState.push_back(col);
            dfs(n, row+1, curState);
            // 需要清空上一次的状态
            cols.erase(col);
            pieQueens.erase(col + row);
            naQueens.erase(col - row);
        }
    }
private:
    set<int> cols; // 列的集合
    set<int> pieQueens; // 撇 的 集合
    set<int> naQueens; // 捺 的 集合
    vector<vector<int>> result;
};



#endif /* N_Queens_hpp */
