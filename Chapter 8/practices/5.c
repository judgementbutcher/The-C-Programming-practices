#include<stdio.h>
#define N 40
int main()
{
    int fib_number[N] = {0,1};
    for (int i = 2; i < N; i++)
    {
        fib_number[i] = fib_number[i-1]+fib_number[i-2];
    }
    for (int i = 0; i < 40; i++)
    {
        printf("%d ", fib_number[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}