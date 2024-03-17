# include <stdio.h>

int main(void)
{
    // int i;
    // int sum = 0;

    // for (i=1; i<=100; ++i)
    // {
    //     sum = sum + i;
    // }
    // printf("sum = %d\n", sum);


    /*sum of factorial*/
    int i = 1;
    int fact = 1;
    int sum = 0;
    int n = 0;

    printf("Please enter a number:");
    scanf("%d", &n);
    for (; i<=n; ++i)
    {
        fact = fact * i;
        sum = sum + fact;
    }
    printf("sum of %d's factorial is %d", n, sum);

    return 0;
}