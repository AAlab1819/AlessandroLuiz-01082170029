#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int input, num;
	int sum=0 ,negSum=0;
	cin>>input;
	for(int i= 0 ; i<input ;i++)
	{
		cin>>num;
		if(num>0)
		{
			sum+=num;
		}
		else
		{
			negSum+=num;
		}
	}
	cout<<sum - negSum<<endl;
	return 0;
}
