# Week 10

## 20 C: Dijkstra?
[**Problem**](https://codeforces.com/problemset/problem/20/C) || [**Solution**](http://codeforces.com/contest/20/submission/45713327)\
This problem is asking us to  find the shortest (smallest weight) to go from vertices 1 to N. 
Here what we will do is finding the shortest(cheapest) path to every single vertices. 
Then we will find which one is best to bring us to N. The solution will uses Dijkstra Algorithm as the problem name itself. 
Remember what we want to find is the path not the cost, so we must watch out for the source.
For example, the input below. 

5 6\
1 2 2\
2 5 5\
2 3 4\
1 4 1\
4 3 3\
3 5 1\

SOURCE DESTINATION PRICE\
  1  ->     2       (2)\
  2  ->     5       (5)\
  2  ->     3       (4)\
  1  ->     4       (1)\
  4  ->     3       (3)\
  3  ->     5       (1)\
  
We may see it is easier if we go 1->2->5 which will cost 2+5=7. It is correct if we want to find the shortest path. But, here we want to find the cheapest, which will be 1->4->3->5 that cost 1+3+1=5. 
Complexity Worst Case: O(nlogn)


## 601 A: The Two Routes
[**Problems**](https://codeforces.com/problemset/problem/601/A) || [**Solution**](http://codeforces.com/contest/601/submission/45713821)\
This problems is asking us to find the shortest way to reach a the last town from the first town. 
To solve this problem we will use an adjacency matrix. 
Because in this problem we did not care, how much the travel cost is, all we want to know is how many transits to reach the last town. 

5 5\
4 2\
3 5\
4 5\
5 1\
1 2\

So here at the example input, there will be 5 towns in total and 5 rail connection. We can see it as adjacency matrix below.

  1 2 3 4 5\
1 0 1 0 0 1\
2 1 0 0 1 0\
3 0 0 0 0 1\
4 0 1 0 0 1\
5 1 0 1 1 0\

So first, we will check whether there is a railway directly from 1 to town N, if yes it means that we can travel to town N from town 1 in just one hour and find a way to town N using the bus. On the other side, if it is no railway (means there is a bus stop) from town 1 to town N, we just need to find how to transport from town 1 to town N using the train. In this case, we use Breadth First Seach to find the shortest path. 
Complexity Worst Case: O(n2)
