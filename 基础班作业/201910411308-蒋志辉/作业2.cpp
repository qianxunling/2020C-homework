#include <stdio.h>
int main(void)
{
    int n;
    printf("请输入要分解的数");
    scanf_s("%d", &n);
    for (int n1 = 1; n1 <= n / 2; n1++)
    {
        for (int n2 = n1 + 1; n2 < n; n2++)
        {
            if ((n1 + n2) * (n2 - n1 + 1) == n * 2)
                
                for (int t = n1; t <= n2; t++)
                {
                    printf("%d", t);
                }
                printf("\n");
            }
        }
    return 0;
    }