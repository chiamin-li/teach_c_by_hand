# include <stdio.h>

int Sum(int n);

int main(void)
{
    int n;

    printf("Please enter a number:");
    scanf("%d", &n);
    printf("sum of 1~%d is %d", n, Sum(n));

    return 0;
}

int Sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n > 1)
    {
        return n+Sum(n-1);
    }
    else
    {
        return -1;
    }
}