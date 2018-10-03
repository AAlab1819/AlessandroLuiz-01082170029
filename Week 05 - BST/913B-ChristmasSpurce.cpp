#include<bits/stdc++.h>

using namespace std;
//declare the variables
int vertex,fa[1010],leaf[1010],parent[1010];

int main()
{
    scanf("%d",&vertex);
    //input the parent of i-th child
    for (int i=2;i<=vertex;++i)
    {
        scanf("%d",fa+i);
        leaf[fa[i]]++;
    }
    for (int i=1;i<=vertex;++i)
    {
        if (!leaf[i])
        {
            parent[fa[i]]++;
        }
    }
    for (int i=1;i<=vertex;++i)
    {
        //IF IT IS MORE THAN 0 BUT LESS THAN 3
        if (leaf[i]&&parent[i]<3)
        {
             return puts("NO"),0;
        }
    }
    puts("YES");
}
