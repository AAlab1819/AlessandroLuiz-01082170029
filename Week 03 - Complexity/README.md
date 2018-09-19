# Week 03

## 148A: Insomnia Cure  
[**Problem**](https://codeforces.com/problemset/problem/148/A) || [**Solution**](https://codeforces.com/contest/148/submission/42950968)\
This problem is asking us to find the number of damaged dragons here were 4 ways to harm the dragon. Every k-th dragon got punched in the face with a frying pan. 
Every l-th dragon got his tail shut into the balcony door. Every m-th dragon got his paws trampled with sharp heels.

**Complexity**<br>
Best Case : O(1)
Average Case : n
Worst Case : O(n)


## 469A: I Wanna Be The Guy
[**Problems**](https://codeforces.com/problemset/problem/469/A) || [**Solution**](https://codeforces.com/contest/469/submission/43040415)\
This problems is asking us to find find if it is possible for the 2 boys to finish all the levels in a game given that each boy can pass a set levels. 
To solve this problem we attempt to input all the levels each boys can pass into a set. If the size of the set is equal to the total number of levels, then it is possible to pass all the levels, otherwise it is not possible.

**Complexity**<br>
Best Case : O(nlogn)
Average Case : O(logn)

## 492B: Vanya and Lanterns
[**Problems**](https://codeforces.com/problemset/problem/492/b) || [**Solution**](https://codeforces.com/contest/492/submission/43070571)\
This problems asking us to find the minimum radius of a lantern so that it can cover all the streets.
The first line input is the number of lanterns and the length of the street.
The next line will be the location of the lanterns in the streets.
The solution here is first to count the distance from 0 to first lantern, then the edge of the street to the last lantern, and the biggest gap between lanterns by sorting the location of the lantern in non-decreasing way. We then divide the biggest gap by two to find the radius, because it is in between two lanterns.
Then we find the greatest number between those three and print it.

**Complexity**<br>
Best Case : O(n)
Average Case : O(1)
