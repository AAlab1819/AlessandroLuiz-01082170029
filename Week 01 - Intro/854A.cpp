#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number,numerator=0,demenumetor=0,divnumber;
    cin>>number;
    if(number%2==0)
    {
        divnumber=number/2;
        if(divnumber%2==1)
        {
            numerator=divnumber-2;
            demenumetor=number-numerator;
        }
        else
        {
            numerator=divnumber-1;
            demenumetor=divnumber+1;
        }
    }
    else
    {
        divnumber=number/2;
        numerator=divnumber;
        demenumetor=number-divnumber;
    }
    cout<<numerator<<" "<<demenumetor<<endl;

    return 0;
}
