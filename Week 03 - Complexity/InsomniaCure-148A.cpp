#include <iostream>

using namespace std;

int main()
{
    int k,l,m,n,dragons;
    cin>>k>>l>>m>>n>>dragons;
    int DamagedDrg = dragons;
    if(k==1 || l==1 || m==1 || n==1)
    {
        cout<<dragons<<endl;
    }
    else
    {
        for(int i=1;i<=dragons;i++)
        {
            if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
                DamagedDrg--;
        }
        cout<<DamagedDrg<<endl;
    }
    return 0;
}
