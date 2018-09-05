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

    YellowCrystal =  YellowCrystal - YellowBall*2 -GreenBall; //the meaning of this line is a calculation of making a yellow ball that need 2 yellow crystal and making of green ball that need 1 yellow crystal
    BlueCrystal = BlueCrystal - BlueBall*3 - GreenBall; //the meaning of this line is a calculation of making a Blue ball that need 3 Blue crystal and making of green ball that need 1 blue crystal

    if(YellowCrystal<0)// this statement means lack of calculation of Yellow Crystal 
    {
        total-=YellowCrystal;
    }
    if(BlueCrystal<0) // this statement means lack of calculation of Blue Crystal
    {
        total-=BlueCrystal;
    }
    cout<<total;
    return 0;
}
