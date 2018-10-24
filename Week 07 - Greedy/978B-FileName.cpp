#include <bits/stdc++.h>
using namespace std;
 
int main() {
	//Declaring variabels
	int input,temp=0, answer=0;
	string FileName;
	cin>>input;
	//for loop to input the string
	for(int i= 0 ; i<input;i++)
	{
		cin>>FileName;
		//check if there are x in the string and store in temp
		if(FileName[i]=='x')
		{
			temp++;
			//if the temp more than 2 the answer will be increase
			if(temp>2)
			{
				answer++;
			}
		}
		//the next inputed string is not x or there no x in inputed string the temp will be reset to 0 
		else
		{
			temp=0;
		}
	}
	cout<<answer<<endl;
	return 0;
}
