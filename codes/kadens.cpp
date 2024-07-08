#include <iostream>
using namespace std;
#include <climits>
int main()
{
    int tsum = 0, sum = INT_MIN;
    int i, n;

    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        tsum = tsum + a[i];
        if (tsum > sum)
            sum = tsum;
        if (tsum < sum)
            tsum = 0;
    }
    printf("%d", sum);
}