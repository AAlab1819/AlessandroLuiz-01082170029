# Week 02

## 230A: Dragons 
[**Problem**](https://codeforces.com/problemset/problem/230/A) || [**Solution**](http://codeforces.com/contest/230/submission/42802805)\
This problem is asking us to help kirito If Kirito starts duelling with the i-th (1 ≤ i ≤ n) dragon and Kirito's strength is not greater than the dragon's strength xi, then Kirito loses the duel and dies. 
But if Kirito's strength is greater than the dragon's strength, then he defeats the dragon and gets a bonus strength increase by yi.
Kirito can fight the dragons in any order. Determine whether he can move on to the next level of the game, that is, defeat all dragons without a single loss.

**Input**<br>
The first line contains two space-separated integers s and n (1 ≤ s ≤ 10^4, 1 ≤ n ≤ 103). 
Then n lines follow: the i-th line contains space-separated integers xi and yi (1 ≤ xi ≤ 104, 0 ≤ yi ≤ 104) — the i-th dragon's strength and the bonus for defeating it.

**Output**<br>
On a single line print "YES" (without the quotes), if Kirito can move on to the next level and print "NO" (without the quotes), if he can't.


## 291A: Spyke Talks
[**Problems**](https://codeforces.com/problemset/problem/291/A) || [**Solution**](http://codeforces.com/contest/291/submission/42789178)\
This problems is asking us to help Help Polycarpus analyze these data and find out the number of pairs of secretaries that are talking.
If Polycarpus has made a mistake in the data and the described situation could not have taken place, say so.
Note that the secretaries can correspond via Spyke not only with each other, but also with the people from other places.
Also, Spyke conferences aren't permitted — that is, one call connects exactly two people.
So in this problem  i use shell sort to solve this problem.
Don't forget to check the next-next secretary (for instance, check Secretary[0], Secretary[1], and Secretary[2]) in order to check if the situation is impossible.

**Input**<br>
The first line contains integer n (1 ≤ n ≤ 10^3) — the number of secretaries in Polycarpus's corporation. 
The next line contains n space-separated integers: id1, id2, ..., idn (0 ≤ idi ≤ 10^9). 
Number id i equals the number of the call session of the i-th secretary, if the secretary is talking via Spyke, or zero otherwise.
Consider the secretaries indexed from 1 to n in some way.

**Output**<br>
Print a single integer — the number of pairs of chatting secretaries, or -1 if Polycarpus's got a mistake in his records and the described situation could not have taken place.


## 768A: oath of The Night's Watch
[**Problems**](https://codeforces.com/problemset/problem/768/A) || [**Solution**](http://codeforces.com/contest/768/submission/42783652)\
This problems asking us to help jon snow.With that begins the watch of Jon Snow. He is assigned the task to support the stewards.
This time he has n stewards with him whom he has to provide support. 
Each steward has his own strength. 
Jon Snow likes to support a steward only if there exists at least one steward who has strength strictly less than him and at least one steward who has strength strictly greater than him.

**Input**<br>
First line consists of a single integer n (1 ≤ n ≤ 10^5) — the number of stewards with Jon Snow.
Second line consists of n space separated integers a1, a2, ..., an (0 ≤ ai ≤ 10^9) representing the values assigned to the stewards.

**Output**<br>
Output a single integer representing the number of stewards which Jon will feed.
