#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int input,temp=0, answer=0;
	string FileName;
	cin>>input;
	for(int i= 0 ; i<input;i++)
	{
		cin>>FileName;
		if(FileName[i]=='x')
		{
			temp++;
			if(temp>2)
			{
				answer++;
			}
		}
		else
		{
			temp=0;
		}
	}
	cout<<answer<<endl;
	return 0;
}
