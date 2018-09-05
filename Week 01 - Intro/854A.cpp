#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number,numerator=0,demenumetor=0,divnumber; //divnumber means a stored number after the Number divided by two
    cin>>number;
    if(number%2==0) //this line means if the number is a even number, that number will through down to that statements
    {
        divnumber=number/2;
        if(divnumber%2==1)// this line means if a divnumber is a odd number, that divnumber will through down to that statements
        {
            numerator=divnumber-2;
            demenumetor=number-numerator;
        }
        else //this line means if a divnumber is a even number, that divnumber will through down to that statements
        {
            numerator=divnumber-1;
            demenumetor=divnumber+1;
        }
    }
    else //this line means if a number is a odd number, that number will through down to that statements
    {
        divnumber=number/2;
        numerator=divnumber;
        demenumetor=number-divnumber;
    }
    cout<<numerator<<" "<<demenumetor<<endl;

    return 0;
}
