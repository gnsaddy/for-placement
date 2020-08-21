#include <stdio.h>

int main()
{

    int n, k, sum1 = 0, sum2 = 0, i, a[n];

    scanf("%d", &n);
    int count1 = 0, count2 = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    k = n;

    while (n > 0)
    {
        // if (n % 2 == 0)
        // {
        // printf("done");
        for (i = 0; i < k / 2; i++)
        {
            sum1 = sum1 + a[i];
            // printf("%d\n", sum1);
        }
        for (i = k / 2; i < n; i++)
        {
            sum2 = sum2 + a[i];
            // printf("%d\n", sum2);
        }
        if (sum1 == sum2)
        {
            // printf("\ndone2");
            for (i = 0; i < k / 2; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
            for (i = k / 2; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            n = 0;
        }

        if (sum1 > sum2)
        {
            // printf("\ngreaters1\n");
            k = k - 2;
            count1++;
        }
        if (sum1 < sum2)
        {
            // printf("\ngreaters2\n");
            k = k + 2;
            count1--;
        }
        sum1 = 0;
        sum2 = 0;
        if (count1 == 0)
        {
            printf("not possible");
            n = 0;
        }
        // }
    }

    return 0;
}