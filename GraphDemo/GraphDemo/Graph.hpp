//
//  Graph.hpp
//  GraphDemo
//
//  Created by fenglin on 2019/8/6.
//  Copyright © 2019 quanshi. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <stdio.h>

/*
public class Graph { // 无向图
    private int v; // 顶点的个数
    private LinkedList<Integer> adj[]; // 邻接表

    public Graph(int v) {
        this.v = v;
        adj = new LinkedList[v];
        for (int i=0; i<v; ++i) {
            adj[i] = new LinkedList<>();
        }
    }

    public void addEdge(int s, int t) { // 无向图一条边存两次
        adj[s].add(t);
        adj[t].add(s);
    }
}
 
 
public void bfs(int s, int t) {
    if (s == t) return;
    boolean[] visited = new boolean[v]; // 已被访问的顶点
    visited[s]=true;
    // queue 是一个队列，用来存储已经被访问、但相连的顶点还没有被访问的顶点。因为广度优先搜索是逐层访问的，也就是说，我们只有把第 k 层的顶点都访问完成之后，才能访问第 k+1 层的顶点。当我们访问到第 k 层的顶点的时候，我们需要把第 k 层的顶点记录下来，稍后才能通过第 k 层的顶点来找第 k+1 层的顶点。所以，我们用这个队列来实现记录的功能。
    Queue<Integer> queue = new LinkedList<>();
    queue.add(s);
 
    // prev 用来记录搜索路径。当我们从顶点 s 开始，广度优先搜索到顶点 t 后，prev 数组中存储的就是搜索的路径。不过，这个路径是反向存储的。prev[w] 存储的是，顶点 w 是从哪个前驱顶点遍历过来的。比如，我们通过顶点 2 的邻接表访问到顶点 3，那 prev[3] 就等于 2。为了正向打印出路径，我们需要递归地来打印，你可以看下 print() 函数的实现方式。
    int[] prev = new int[v];
    for (int i = 0; i < v; ++i) {
        prev[i] = -1;
    }
    while (queue.size() != 0) {
        int w = queue.poll();
        for (int i = 0; i < adj[w].size(); ++i) {
            int q = adj[w].get(i);
            if (!visited[q]) {
                prev[q] = w;
                if (q == t) {
                    print(prev, s, t);
                    return;
                }
                visited[q] = true;
                queue.add(q);
            }
        }
    }
}

private void print(int[] prev, int s, int t) { // 递归打印 s->t 的路径
    if (prev[t] != -1 && t != s) {
        print(prev, s, prev[t]);
    }
    System.out.print(t + " ");
}
*/

class Grapth {
    
public:
    Grapth(int v){};
private:
    int v;// 顶点的个数
    
};



#endif /* Graph_hpp */
