#include <bits/stdc++.h>
using namespace std;

int main() {
	int session, temp =1;
	cin>>session;
	int days[session];
	for(int i= 0 ; i<session;i++)
	{
		cin>>days[i];
	}
	for (int i=0; i<session; i++)
	{
		if (days[i]%2==1)
		{
			if (days[i+1]==0 || i==session-1)
			{
				temp= 2;
				break;;
			}
			days[i+1]--;
		}
	}
	if (temp==1)
    {
        cout<<"YES";
    }
	else{
        cout<<"NO";
	}
	return 0;
}
