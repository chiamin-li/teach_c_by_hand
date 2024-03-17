# include <stdio.h>

long Fibonacci(int i);

int main(void)
{
    int n;

    printf("Please enter a number:");
    scanf("%d", &n);

    printf("%d'th term in fibonacci sequence is %d", n, Fibonacci(n));

    return 0;
}

long Fibonacci(int i)  //find the value of the i'th term in fibonacci sequence
{
    if (i==1)
    {
        return 0;
    }
    else if (i==2 || i==3)
    {
        return 1;
    }
    else if (i>3)
    {
        return Fibonacci(i-1) + Fibonacci(i-2);
    }
    else
    {
        return -1;
    }
}