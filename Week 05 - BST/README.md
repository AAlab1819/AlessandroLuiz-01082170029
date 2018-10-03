# Week 05

## 115A: Party  
[**Problem**](https://codeforces.com/problemset/problem/115/A) || [**Solution**](https://codeforces.com/contest/115/submission/43703068)\
This problem is asking us to find the minimum number of groups of employees that can be created given that no member in any group will have any of their superiors in the same group.
To solve this problem we can create a tree/trees from the heirarchy of the employees.
The superiors will be the parent of the employees below him in the tree, and this is done using a map by assigning the superior index with the employee index below him. 
Employees with -1 as their manager will be the root of a tree, and as there may be several employees with -1 manager then there may also be several unrelated trees. 
Employees of the same depth will end up in a group together so as to have a group without superiority, and by finding the height (largest depth) of the trees we can make a group for all the employees to be grouped by depth. 
To find the height of the trees we will traverse the tree bottom-up and incrementing its depth by 1 every time until we have reached the root in this case -1. 
We will also compare the depths every time until we finish to find the max height of the trees, which is also the minimum number of groups we need.

**Complexity**<br>
O(n^2)


## 913B: Christmas Spurce
[**Problems**](https://codeforces.com/problemset/problem/913/B) || [**Solution**](http://codeforces.com/contest/913/submission/43736248)\
This problems is asking us to find whether a rooted tree is a spruce or not. 
A spruce is a rooted tree that has at least 3 leaf, and a leaf is an element on the tree without a child. To solve this problem we first need to create the tree, in this case it is created using a vector of vector. 
We will then traverse the tree top-down and check each element if it is a leaf or has 3 leaf. 
A leaf can be found if it's vector is empty signifying that it has no child.
If an element is not a leaf and has less than 3 leaf, then the tree is not a spruce, therefore ending the process. 
Otherwise the process will reach its end and the tree is therefore a spruce.

**Complexity**<br>
O(nlogn)

## 4C: Registration System
[**Problems**](https://codeforces.com/problemset/problem/4/C) || [**Solution**](https://codeforces.com/contest/4/submission/43703996)\
This problems asking us to input some name, and check it whether the name is already registered or not . 
First we need to input how many name we want to input. 
After that we need to input the name, and we need to check the name is registered or not.
If the name is registered, the ouput will be the name with "i"(i is the number how many times the name has been registered) behind it. 
If the number hasn't registered, it will ouput 'OK'.

**Complexity**<br>
O(nlogn)
