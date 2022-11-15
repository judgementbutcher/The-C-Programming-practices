#include<stdio.h>
#include<stdbool.h>

int main()
{
    long n;
    int digit = 0;
    scanf("%ld", &n);
    int s[10] = {0};
    while (n>0)
    {
        digit = n%10;
        s[digit]++;
        n/=10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (s[i]>=2)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}