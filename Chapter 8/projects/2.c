#include<stdio.h>

int main()
{
    printf("Enter a number:");
    long n;
    scanf("%ld", &n);
    printf("Digit:          ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    printf("Occurrences:    ");
    int s[10] = {0};
    int digit = 0;
    while (n>0)
    {
        digit = n%10;
        s[digit]++;
        n/=10;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", s[i]);
    }
    printf("\n");
    
    
    system("pause");
    return 0;
}