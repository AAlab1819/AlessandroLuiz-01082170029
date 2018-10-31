#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m;
    long long int t,l,r;
    cin>>n;
    long long int a[n],b[n],c[n],d[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    c[0]=a[0];
    d[0]=b[0];
    for(int i=1;i<n;i++)
    {
        c[i]=a[i]+c[i-1];
        d[i]=b[i]+d[i-1];
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>t>>l>>r;
        l--;r--;
        if(t==1)
            cout<<(c[r]-c[l]+a[l])<<endl;
        else
            cout<<(d[r]-d[l]+b[l])<<endl;

    }

    return 0;
}
