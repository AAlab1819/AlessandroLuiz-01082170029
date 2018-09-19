#include <bits/stdc++.h>

using namespace std;

int main()
{
    int street,lanterns,radius;
    float rad;
    cin>>street>>lanterns;
    int arr [street];

    for(int i =0; i<street;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+street);
    radius=max(arr[0],lanterns-arr[street-1])*2;

    for(int i=0;i<street-1;i++)
    {
        radius=max(radius,arr[i+1]-arr[i]);
    }
    rad=radius;
    cout.precision(10);
    cout<< fixed <<rad/2.0<<endl;

    return 0;
}
