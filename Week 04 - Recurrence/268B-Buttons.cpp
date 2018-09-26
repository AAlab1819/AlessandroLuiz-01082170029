#include <iostream>

using namespace std;

int main()
{
    long long int n;
    int sum;
    cin>>n;
    sum=n;
    for(int i=0; i<n;i++)
    {
        sum+=(n-i)*i;
    }
    cout << sum << endl;
    return 0;
}
