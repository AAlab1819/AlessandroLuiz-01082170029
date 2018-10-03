#include <bits/stdc++.h>

using namespace std;

int fa[2005];
int main()
{
    int employees,groups,temp;//Declearing Variable
    cin >> employees;//input the number of employee
    int arr[employees];
    for(int i = 1; i <= employees; i++)//Input the immediate manager for the i-th employee
    {
        cin >> arr[i];
    }
    groups= 0;
    for (int i = 1; i <= employees; i++)
    {
        temp = 0;
        for (int j = i; j <= employees && j != -1; j = arr[j])
        {
            temp++;
        }
        groups = max(groups,temp);//To know how many groups needed
    }
    cout << groups << endl;
    return 0;
}
