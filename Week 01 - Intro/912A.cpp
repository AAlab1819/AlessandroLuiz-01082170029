#include <bits/stdc++.h>

using namespace std;

int main()
{
    //long long int means int can store more large amount of number//
    long long int YellowCrystal,BlueCrystal;
    long long int YellowBall,GreenBall,BlueBall;
    long long int total = 0;
    cin>>YellowCrystal>>BlueCrystal;
    cin>>YellowBall>>GreenBall>>BlueBall;

    YellowCrystal =  YellowCrystal - YellowBall*2 -GreenBall;
    BlueCrystal = BlueCrystal - BlueBall*3 - GreenBall;

    if(YellowCrystal<0)
    {
        total-=YellowCrystal;
    }
    if(BlueCrystal<0)
    {
        total-=BlueCrystal;
    }
    cout<<total;
    return 0;
}
