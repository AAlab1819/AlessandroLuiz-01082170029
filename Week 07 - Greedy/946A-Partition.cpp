#include <bits/stdc++.h>
using namespace std;
 
int main() {
	//Declaring variables
	int input, num;
	int sum=0 ,negSum=0;
	cin>>input;
	//for loop to input the number
	for(int i= 0 ; i<input ;i++)
	{
		cin>>num;
		//check if the inputed number is postive number or not
		if(num>0)
		{
			//sum all inputed number with the positive number
			sum+=num;
		}
		////check if the inputed number is negative number or not
		else
		{
			//sum all inputed number with the negative number
			negSum+=num;
		}
	}
	// calculate the sum and negsum
	cout<<sum - negSum<<endl;
	return 0;
}
