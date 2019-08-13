//
//  Reverse Linked List II.hpp
//  LinkedMap
//
//  Created by 张枫林 on 2019/8/13.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Reverse_Linked_List_II_hpp
#define Reverse_Linked_List_II_hpp

#include <stdio.h>
#include "../LinkedList.h"

class Solution_92 {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *dummy = new ListNode(-1);
        ListNode *pre = dummy;
        dummy->next = head;
        for (int i=1; i<m; i++) {
            pre = pre->next;
        }
        ListNode *cur = pre->next;
        for (int i=m; i<n; i++) {
            ListNode *next = cur->next;
            cur->next = next->next;
            next->next = pre->next;
            pre->next = next;
        }
        return dummy->next;
    }
    
    void test();
};

/*
 反转从位置 m 到 n 的链表。请使用一趟扫描完成反转。
 
 说明:
 1 ≤ m ≤ n ≤ 链表长度。
 
 示例:
 
 输入: 1->2->3->4->5->NULL, m = 2, n = 4
 输出: 1->4->3->2->5->NULL
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/reverse-linked-list-ii
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */


/*
 
 对于链表的问题，根据以往的经验一般都是要建一个dummy node，连上原链表的头结点，这样的话就算头结点变动了，我们还可以通过dummy->next来获得新链表的头结点。这道题的要求是只通过一次遍历完成，就拿题目中的例子来说，变换的是2,3,4这三个点，我们需要找到第一个开始变换结点的前一个结点，只要让pre向后走m-1步即可，为啥要减1呢，因为题目中是从1开始计数的，这里只走了1步，就是结点1，用pre指向它。万一是结点1开始变换的怎么办，这就是我们为啥要用dummy结点了，pre也可以指向dummy结点。然后就要开始交换了，由于一次只能交换两个结点，所以我们按如下的交换顺序：
 
 1 -> 2 -> 3 -> 4 -> 5 -> NULL
 
 1 -> 3 -> 2 -> 4 -> 5 -> NULL
 
 1 -> 4 -> 3 -> 2 -> 5 -> NULL
 
 我们可以看出来，总共需要n-m步即可，第一步是将结点3放到结点1的后面，第二步将结点4放到结点1的后面。这是很有规律的操作，那么我们就说一个就行了，比如刚开始，pre指向结点1，cur指向结点2，然后我们建立一个临时的结点t，指向结点3（注意我们用临时变量保存某个结点就是为了首先断开该结点和前面结点之间的联系，这可以当作一个规律记下来），然后我们断开结点2和结点3，将结点2的next连到结点4上，也就是 cur->next = t->next，再把结点3连到结点1的后面结点（即结点2）的前面，即 t->next = pre->next，最后再将原来的结点1和结点2的连接断开，将结点1连到结点3，即 pre->next = t。这样我们就完成了将结点3取出，加入结点1的后方。第二步将结点4取出，加入结点1的后方，也是同样的操作，这里就不多说了，请大家自己尝试下吧，参考代码如下
 
 作者：crunch
 链接：https://leetcode-cn.com/problems/two-sum/solution/using-c-by-crunch-2/
 来源：力扣（LeetCode）
 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 
 */
#endif /* Reverse_Linked_List_II_hpp */
