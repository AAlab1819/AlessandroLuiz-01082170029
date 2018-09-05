#include <bits/stdc++.h>
using namespace std;

int main()
{
    int students, team;
    cin>>students;
    cin>>team;
    int arr[students];
    map <int, int>checker; //the meaning of this method is to check a data and the data type in list

    for(int i=0;i<students;i++)
    {
        cin>>arr[i];
        checker[arr[i]]=i+1;
    }
     if(checker.size()< team)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES"<<endl;
            for(map<int,int>::iterator it=checker.begin(); it!=checker.end(),team>0;++it,team--)
            {
                cout<<it->second<<" ";
            }
        }

    return 0;
}
