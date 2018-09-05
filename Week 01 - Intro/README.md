# Week 01

### 854A: Fraction 
[**Problem**](https://codeforces.com/problemset/problem/854/A) || [**Solution**](https://codeforces.com/contest/854/submission/42496198)\
This problem is asking us to find the highest possible fraction that cannot be simplified.
Also We need to find the numerator and denominator. The denominator must be smaller than the numerator but we need to find the largest denominator that can be resulted.\
That a fraction  is called proper iff its numerator is smaller than its denominator (a < b) and that the fraction is called irreducible if its numerator and its denominator are coprime (they do not have positive common divisors except 1).\
Like this process:\
the input number = 12 (input there is an integer n (3 ≤ n ≤ 1000), the sum of numerator and denominator of the fraction.)\
12 divided by 2 = 6 (6 is a number of partition result)\
6-1 = 5 ( nemurator becomes 5)\
6+1 = 7 (demoinator becomes 7)\
then the output is '5 7'.


### 912A: Tricky Alchemy
[**Problems**](https://codeforces.com/problemset/problem/912/A) || [**Solution**] (https://codeforces.com/contest/912/submission/42313680)\
This problems is asking us to help Grisha to make a Yellow ball, Green ball, and Blue ball from Yellow Crystal and Blue Crystal.\
It's known that to produce a Yellow ball one needs 2 Yellow Crystals, Green ball 1 Yellow Crystal and 1 Blue Crystal, and for a Blue ball, 3 Blue Crystals are enough.\
Right now there are A yellow and B blue crystals in Grisha's disposal. Find out how many additional crystals he should acquire in order to produce the required number of balls.\

##Input
The First line features two integers A and B (0 ≤ A, B ≤ 10^9), denoting the number of Yellow Crystal and Blue Crystals respectively at Grisha's disposal.\
The next line contains three integers x, y and z (0 ≤ x, y, z ≤ 10^9) the respective amounts of Yellow balls, Green balls and Blue balls to be obtained.\

## Ouput
Print a single integer — the minimum number of crystals that Grisha should acquire in addition.\

Example:\
4 3 
2 1 1
The output is:\
2


## 988A: Diverse Team
[**Problems**](https://codeforces.com/problemset/problem/988/A) || [**Solution**](https://codeforces.com/contest/988/submission/42496369)\
This problems asking us to find that the student could be devided into team or not.\
The student can be divided if in the input the students don't have any distinct ratings\
In the code we need to use vector to save the number of array.\
In the first for statement we use scores.input to check make a checker that will used in the next statement.\
It is written that if scores.size()<k it will output "NO", in this line the code will check whter the size of the score is less then the amount of the member in the team or not.\ 
If it was less then k , it will ouput "NO". If the result is larger, it will push the data to the result vector and will be ouput.\

