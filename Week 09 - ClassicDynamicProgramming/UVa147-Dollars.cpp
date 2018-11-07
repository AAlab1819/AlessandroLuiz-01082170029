#include <bits/stdc++.h>

using namespace std;
#define N 30002
static long long c[N];

int main()
{
    float n;
    c[0] = 1;
    for(int j = 5; j < N; ++j)
        c[j] += c[j - 5];

    for(int j = 10; j < N; ++j)
        c[j] += c[j - 10];

    for(int j = 20; j < N; ++j)
        c[j] += c[j - 20];

    for(int j = 50; j < N; ++j)
        c[j] += c[j - 50];

    for(int j = 100; j < N; ++j)
        c[j] += c[j - 100];

    for(int j = 200; j < N; ++j)
        c[j] += c[j - 200];

    for(int j = 500; j < N; ++j)
        c[j] += c[j - 500];

    for(int j = 1000; j < N; ++j)
        c[j] += c[j - 1000];

    for(int j = 2000; j < N; ++j)
        c[j] += c[j - 2000];

    for(int j = 5000; j < N; ++j)
        c[j] += c[j - 5000];

    for(int j = 10000; j < N; ++j)
        c[j] += c[j - 10000];

    while(scanf("%f", &n) == 1 && n)
    {
        // Rounding error fix
        unsigned coin = (unsigned)((n + 0.001) * 100);

        // 6 width justified including the input amount and 17 width afterwards including count
        printf("%6.2f%17lld\n", n, c[coin]);
    }
    return 0;
}




































