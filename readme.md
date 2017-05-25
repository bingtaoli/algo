该仓库记录算法题目。高中的数学老师经常说，我们学数学不是有什么特殊的目的，更是一种思维的锻炼。我认为算法题也是一种思维的锻炼，可以延缓程序员的老化，hhh。

### 两个栈实现队列

一篇博客给出了答案: http://www.cnblogs.com/wanghui9072229/archive/2011/11/22/2259391.html

大多数人的思路是：

始终维护s1作为存储空间，以s2作为临时缓冲区。
入队时，将元素压入s1。
出队时，将s1的元素逐个“倒入”（弹出并压入）s2，将s2的顶元素弹出作为出队元素，之后再将s2剩下的元素逐个“倒回”s1。

真正性能较高的，其实是另一个变种。即：

入队时，将元素压入s1。
出队时，判断s2是否为空，如不为空，则直接弹出顶元素；如为空，则将s1的元素逐个“倒入”s2，把最后一个元素弹出并出队。
这个思路，避免了反复“倒”栈，仅在需要时才“倒”一次。但在实际面试中很少有人说出，可能是时间较少的缘故吧。

### 整数数组取两个值之和等于A

给定一个值A，给一个数组，取两个元素相加之和等于A。

这题我一开始的思路是：

先排序，然后i和j在数组的首和尾，挪动i和j直到等于A。时间花费为O(nlogn) + O(n)，其中前者是快速排序的开销，后者是移动i和j的开销。

然后面试官问我有没有更快的方法。我没办法回答。后来谷歌了下，直到如果原有数组时有序的话，则为O(n)；如果无序则必须先排序了，为O(NlogN)

