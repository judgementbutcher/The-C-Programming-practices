#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    while (true)
    {
        printf("Enter a number: ");
        scanf("%ld", &n);
        if (n!=-1)
        {
            while (n>0)
        {
            if(digit_seen[digit])
            {
                break;
            }
            digit_seen[digit] = true;
            n /=10;
        }
        if (n>0)
        {
            printf("Repeated digit\n"); 
        }
        else
        {
            printf("No repeated digit\n");
        }
        }
        else
        {
            return 0;
        }
        
        

    }
    system("pause");
    return 0;
}