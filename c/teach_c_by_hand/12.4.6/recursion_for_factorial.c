# include <stdio.h>

long Factorial(int n);

int main(void)
{
    int n;
    printf("please enter a number:");
    scanf("%d", &n);

    printf("%d! = %ld\n", n, Factorial(n));
    
    return 0;
}

long Factorial(int n)
{
    if (n<0)
    {
        return -1;
    }
    else if (n==0 || n ==1)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n-1);
    }
}