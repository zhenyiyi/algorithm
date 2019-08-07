//
//  Lemonade Change.hpp
//  GreedyDemo
//
//  Created by fenglin on 2019/8/7.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Lemonade_Change_hpp
#define Lemonade_Change_hpp
/*
 在柠檬水摊上，每一杯柠檬水的售价为 5 美元。
 
 顾客排队购买你的产品，（按账单 bills 支付的顺序）一次购买一杯。
 
 每位顾客只买一杯柠檬水，然后向你付 5 美元、10 美元或 20 美元。你必须给每个顾客正确找零，也就是说净交易是每位顾客向你支付 5 美元。
 
 注意，一开始你手头没有任何零钱。
 
 如果你能给每位顾客正确找零，返回 true ，否则返回 false 。
 
 
 0 <= bills.length <= 10000
 bills[i] 不是 5 就是 10 或是 20
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/lemonade-change
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include <stdio.h>
#include <vector>
using namespace std;

class Solution_860 {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> myBills;
        bool canChange;
        for (int i=0; i<bills.size(); i++) {
            if (bills[i] != 5) {
                canChange = false;
                int remained = bills[i] - 5;
                sort(myBills.begin(), myBills.end());
                if (remained == 5) {
                    vector<int>::iterator it =  find(myBills.begin(), myBills.end(), 5);
                    canChange = it != myBills.end();
                    if (canChange) {
                        myBills.erase(it);
                    }
                }else if (remained == 15){
                    size_t fiveNum =  count(myBills.begin(), myBills.end(), 5);
                    size_t tenNum =  count(myBills.begin(), myBills.end(), 10);
                    if (fiveNum>=1 && tenNum>=1) {
                        vector<int>::iterator it =  find(myBills.begin(), myBills.end(), 10);
                        myBills.erase(it);
                        it = find(myBills.begin(), myBills.end(), 5);
                        myBills.erase(it);
                        canChange = true;
                    }else if (fiveNum >= 3){
                        int temp = 3;
                        while (temp) {
                            vector<int>::iterator it = find(myBills.begin(), myBills.end(), 5);
                            myBills.erase(it);
                            temp --;
                        }
                        canChange = true;
                    }
                }
                if (!canChange) {
                    break;
                }
            }
            myBills.push_back(bills[i]);
        }
        return canChange;
    }
    
    void test();
};


class Solution_860_2 {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        bool ret = true;
        for (auto bill : bills) {
            if (bill == 5) {
                five ++;
            }else if (bill == 10){
                if (five <= 0) {
                    ret = false;
                    break;
                }
                five --;
                ten ++;
            }else{
                if (ten > 0 && five >0) {
                    ten --;
                    five --;
                }else if (five >= 3){
                    five -= 3;
                }else{
                    ret = false;
                    break;
                }
            }
        }
        return ret;
    }
};
/*
 
 让我们尝试模拟给每个购买柠檬水的顾客进行找零的过程。最初，我们从没有 5 美元钞票也没有 10 美元钞票的情况开始。
 
 如果顾客支付了 5 美元钞票，那么我们就得到 5 美元的钞票。
 
 如果顾客支付了 10 美元钞票，我们必须找回一张 5 美元钞票。如果我们没有 5 美元的钞票，答案就是 false，因为我们无法正确找零。
 
 如果顾客支付了 20 美元钞票，我们必须找回 15 美元。
 
 如果我们有一张 10 美元和一张 5 美元，那么我们总会更愿意这样找零，这比用三张 5 美元进行找零更有利。
 
 否则，如果我们有三张 5 美元的钞票，那么我们将这样找零。
 
 否则，我们将无法给出总面值为 15 美元的零钱，答案是 false。
 
 作者：LeetCode
 链接：https://leetcode-cn.com/problems/two-sum/solution/ning-meng-shui-zhao-ling-by-leetcode/
 来源：力扣（LeetCode）
 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */
#endif /* Lemonade_Change_hpp */
