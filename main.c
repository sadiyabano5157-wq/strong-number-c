#include<stdio.h>

int main()
{
    int i, n, digit;
    int sum = 0, fact, temp;

    printf("Enter a number\n");
    scanf("%d",&n);

    temp = n;

    while(n > 0)
    {
        digit = n % 10;
        fact = 1;

        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;

        n = n / 10;
    }

    printf("Sum of factorial of digits = %d\n", sum);

    if(sum == temp)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not strong number\n");
    }

    return 0;
}
