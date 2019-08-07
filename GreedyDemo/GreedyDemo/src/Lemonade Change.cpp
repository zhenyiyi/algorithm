//
//  Lemonade Change.cpp
//  GreedyDemo
//
//  Created by fenglin on 2019/8/7.
//  Copyright © 2019 quanshi. All rights reserved.
//

#include "Lemonade Change.hpp"


void Solution_860::test(){
    vector<int> bills = {5,5,10,10,20};
    sort(bills.rbegin(), bills.rend());
    lemonadeChange(bills);
}
