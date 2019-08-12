#### 

-   Linked List 就是特殊化的 Tree 

-   Tree 就是特殊化的 Graph

1. 若任意节点的左⼦子树不不空，则左⼦子树上所有结点的值均⼩小于它的 根结点的值; 
2. 若任意节点的右⼦子树不不空，则右⼦子树上所有结点的值均⼤大于它的 根结点的值; 
3. 任意节点的左、右⼦子树也分别为⼆二叉查找树。 


#### 遍历

1. 前序(Pre-order):根-左-右 

2. 中序(In-order):左-根-右

3. 后序(Post-order):左-右-根



##3.1 什么是树 

```
客观世界中许多事物存在层次关系
```

- 人类社会家谱 
-  社会组织结构 
-  图书信息管理 

####分层次组织在管理上具有更高的效率!

#### 1. 查找(Searching) 

> 查找: 根据某个给定关键字K ，从集合R中找出关键字与K相同的记录 

静态查找: 集合中记录是固定的

- 没有插入和删除操作，只有查找 

动态查找: 集合中记录是动态变化的

- 除查找，还可能发生插入和删除 

#### 静态查找 

方法1: 顺序查找 

```c
int SequentialSearch (StaticTable *Tbl, ElementType K)
{ 
  /*在表Tbl[1]~Tbl[n]中查找关键字为K的数据元素*/ int i;
	Tbl->Element[0] = K; /*建立哨兵*/
	for(i = Tbl->Length; Tbl->Element[i]!= K; i--);
  return i; /*查找成功返回所在单元下标;不成功返回0*/
}
```

> 顺序查找算法的时间复杂度为O(n) 



方法2:  二分查找(Binary Search)

假设n个数据元素的关键字满足有序(比如:小到大)  

并且是连续存放(数组)，那么可以进行二分查找。

```c
int BinarySearch ( StaticTable * Tbl, ElementType K) 
{ /*在表Tbl中查找关键字为K的数据元素*/
	int left, right, mid, NoFound=-1;
	left = 1;
  right = Tbl->Length;
  // 查找的结束条件
  while ( left <= right ) {
    mid = (left+right)/2;
    if( K < Tbl->Element[mid]) right = mid-1;
    else if( K > Tbl->Element[mid]) left = mid+1;
    else return mid; /*查找成功，返回数据元素的下标*/
	}
	return NotFound; /*查找不成功，返回-1*/ 
}

```

> 二分查找算法具有对数的时间复杂度O(logN)

#### 11个元素的二分查找判定树

- 判定树上每个结点需要的查找次数刚好 为该结点所在的层数; 

- 查找成功时查找次数不会超过判 定树的深度 

- n个结点的判定树的深度 为[log2n]+1. 
- ASL = (4*4+4*3+2*2+1)/11 = 3 

##树的定义 

树(Tree): n(n≥0)个结点构成的有限集合。 当n=0时，称为空树;
 对于任一棵非空树(n> 0)，它具备以下性质: 

- 树中有一个称为“根(Root)”的特殊结点，用 r 表示; 
- 其余结点可分为m(m>0)个互不相交的有限集T1，T2，... ，Tm，其 中每个集合本身又是一棵树，称为原来树的“子树(SubTree)” 
- 子树是不相交的;
-  除了根结点外，每个结点有且仅有一个父结点;
- 一棵N个结点的树有N-1条边。

### 树的一些基本术语

1. 结点的度(Degree): 结点的子树个数 
2. 树的度:  树的所有结点中最大的度数 
3. 叶结点(Leaf): 度为0的结点 
4. 父结点(Parent): 有子树的结点是其子树的根结点的父结点 
5. 子结点(Child): 若A结点是B结点的父结 L 点，则称B结点是A结点的子结点;子结点也 称孩子结点。 
6. 兄弟结点(Sibling): 具有同一父结点的各结点彼此是兄弟结点。 
7. 路径和路径长度:从结点n1到nk的路径为一 个结点序列n1 , n2 ,... , nk , ni是 ni+1的父结 点。路径所包含边的个数为路径的长度。 
8. 祖先结点(Ancestor):沿树根到某一结点路 径上的所有结点都是这个结点的祖先结点。 
9. 子孙结点(Descendant):某一结点的子树 中的所有结点是这个结点的子孙。 
10. 结点的层次(Level):规定根结点在1层， 其它任一结点的层数是其父结点的层数加1。 
11. 树的深度(Depth):树中所有结点中的最 大层次是这棵树的深度。 

### 讨论3.1 黄金分割查找？

在二分查找中，我们是取mid等于left和right的中间值，即用等分的方法进行查找。

那为什么一定要等分呐？能不能进行“黄金分割”？也就是mid=left+0.618(right-left),当然mid要取整数。如果这样查找，时间复杂性是多少？也许你还可以编程做个试验，比较一下二分法和“黄金分割”法的执行效率。



一开始有N个数，执行一次后，观察还剩下数的个数，使这个数最小，则执行效率最高。

更一般地考虑分割比例。假设分割比例是**x** 和 **1-x **。

我们的目的是通过一次分割，剩下的需要处理的元素变得更少。

显然分割一次，有 x 的概率留下 x*N 个元素，有 (1-x) 的概率留下 (1-x)*N个元素，因此期望是：

N'=N*[(1-x)^2+x^2]       其中x的取值区间是(0,1)

由二次函数的相关知识不难知道，在 x=1/2 时期望最小。也就是说，二分法的效果是最好的。

## 3.2 二叉树及存储结构

### 二叉树的定义 

二叉树T : 一个有穷的结点集合。

这个集合可以为空 若不为空，则它是由根结点和称为其左子树 TL 和 右子树TR的 两个不相交的二叉树组成。 

- 二叉树的子树有左右顺序之分
- 二叉树具体五种基本形态

### 特殊二叉树

- 斜二叉树(Skewed Binary Tree)
- 满二叉树(Full Binary Tree) 完美二叉树(Perfect Binary Tree)
- 完全二叉树 (Complete Binary Tree) 有n个结点的二叉树，对树中结点按从上至下、从左到右顺序进行编号，
  编号为i(1 ≤ i ≤ n)结点与满二叉树中编号为 i 结点在二叉树中位置相同

### 二叉树几个重要性质

-  一个二叉树第 i 层的最大结点数为: 2 的 i -1 次方，i >= 1。 
-  深度为k的二叉树有最大结点总数为: 2 的k次方 -1，k >= 1。 
-  对任何非空二叉树 T，若n0表示叶结点的个数、n2是 度为2的非叶结点个数，那么两者满足关系n0 = n2 +1。 (证明：)



### 二叉树遍历

```c
void InorderTraversal( BinTree BT )
{
    if( BT ) {
        InorderTraversal( BT->Left );
        /* 此处假设对BT结点的访问就是打印数据 */
        printf("%d ", BT->Data); /* 假设数据为整型 */
        InorderTraversal( BT->Right );
    }
}
 
void PreorderTraversal( BinTree BT )
{
    if( BT ) {
        printf("%d ", BT->Data );
        PreorderTraversal( BT->Left );
        PreorderTraversal( BT->Right );
    }
}
 
void PostorderTraversal( BinTree BT )
{
    if( BT ) {
        PostorderTraversal( BT->Left );
        PostorderTraversal( BT->Right );
        printf("%d ", BT->Data);
    }
}
 
void LevelorderTraversal ( BinTree BT )
{ 
    Queue Q; 
    BinTree T;
 
    if ( !BT ) return; /* 若是空树则直接返回 */
     
    Q = CreatQueue(); /* 创建空队列Q */
    AddQ( Q, BT );
    while ( !IsEmpty(Q) ) {
        T = DeleteQ( Q );
        printf("%d ", T->Data); /* 访问取出队列的结点 */
        if ( T->Left )   AddQ( Q, T->Left );
        if ( T->Right )  AddQ( Q, T->Right );
    }
}
```



### 二叉树遍历 非递归

- 中序遍历非递归遍历算法 

- 遇到一个结点，就把它压栈，并去遍历它的左子树; 
-  当左子树遍历结束后，从栈顶弹出这个结点并访问它; 
-  然后按其右指针再去中序遍历该结点的右子树。 

```c
void InOrderTraversal( BinTree BT )
{  
  BinTree T=BT;
  Stack S = CreatStack( MaxSize ); /*创建并初始化堆栈S*/ 
  while( T || !IsEmpty(S) ){
    while(T){ /*一直向左并将沿途结点压入堆栈*/ Push(S,T);
      T = T->Left; 
    }
    if(!IsEmpty(S)){
      T = Pop(S); /*结点弹出堆栈*/
      printf(“%5d”, T->Data); /*(中序访问)打印结点*/ 
      T = T->Right; /*转向右子树*/
    }
  }
}
```

### 层序遍历 

二叉树遍历的核心问题:  **二维结构的线性化**

- 从结点访问其左、右儿子结点
- 访问左儿子后，右儿子结点怎么办? 
- 需要一个存储结构保存暂时不访问的结点 
- 存储结构:堆栈、队列 

**队列实现** : 遍历从根结点开始，首先将根结点入队，然后开始执行循环

结点出队、访问该结点、其左右儿子入队

```c
void LevelOrderTraversal ( BinTree BT )
{
  Queue Q; BinTree T;
  if ( !BT ) return; /* 若是空树则直接返回 */
  Q = CreatQueue( MaxSize ); /*创建并初始化队列Q*/ AddQ( Q, BT );
  while ( !IsEmptyQ( Q ) ) {
    T = DeleteQ( Q );
    printf(“%d\n”, T->Data); /*访问取出队列的结点*/ 
    if ( T->Left ) AddQ( Q, T->Left );
    if ( T->Right ) AddQ( Q, T->Right );
  } 
}
```



例子：

1. 输出二叉树中的叶子结点

   - 在二叉树的遍历算法中增加检测结点的 “左右子树是否都为空”

2. 求树的高度 (后续遍历)

   ```c
   int PostOrderGetHeight( BinTree BT ) { 
     int HL, HR, MaxH;
     if( BT ) {
   		HL = PostOrderGetHeight(BT->Left); /*求左子树的深度*/ 
       HR = PostOrderGetHeight(BT->Right); /*求右子树的深度*/
       MaxH = (HL > HR)? HL : HR; /*取左右子树较大的深度*/
       return ( MaxH + 1 ); /*返回树的深度*/
     }
     else return 0; /* 空树深度为0 */
   }
   ```

   

3. 二元运算表达式树及其遍历

4. 由两种遍历序列确定二叉树

   先序和中序遍历序列来确定一棵二叉树  

   - 根据先序遍历序列第一个结点确定根结点;
   - 根据根结点在中序遍历序列中分割出左右两个子序列 
   - 对左子树和右子树分别递归使用相同的方法继续分解。 

5. 给定两棵树T1和T2。如果T1可以通过若干次左右孩子互换就变成T2，则我们称两棵树是“同构”的。
   现给定两棵树，请你判断它们是否是同构的？

   

## 4.1 二叉搜索树

查找问题:

- 静态查找与动态查找
- 针对动态查找，数据如何组织?

#### 什么是二叉搜索树 

二叉搜索树(BST，Binary Search Tree)， 也称二叉排序树或二叉查找树 

```
 二叉搜索树:一棵二叉树，可以为空;如果不为空，满足以下性质:
```

1. 非空左子树的所有键值小于其根结点的键值。 
2. 非空右子树的所有键值大于其根结点的键值。
3.  左、右子树都是二叉搜索树。 

#### 二叉搜索树操作的特别函数:

- Position Find( ElementType X, BinTree BST ):从二叉搜索树BST 中查找元素X，返回其所在结点的地址;
- Position FindMin( BinTree BST ):从二叉搜索树BST中查找并返回 最小元素所在结点的地址; 

- Position FindMax( BinTree BST ) :从二叉搜索树BST中查找并返回 最大元素所在结点的地址。 
- BinTree Insert( ElementType X, BinTree BST ) 
- BinTree Delete( ElementType X, BinTree BST ) 





##4.2 什么是平衡二叉树 

平衡因子(Balance Factor，简称BF):  BF(T) = hL-hR， 其中hL和hR分别为T的左、右子树的高度。 

平衡二叉树(Balanced Binary Tree)(AVL树) 空树，或者 

任一结点左、右子树高度差的绝对值不超过1，即|BF(T) |≤ 1 

