# include <stdio.h>

int main(void)
{
    int a[10] = {0};
    int *p = a;
    int max;
    int i;  //cyclic variable
    int flag = 1;

    printf("Pleaase enter 10 numbers:");
    for (i=0; i<10;i++)
    {
        scanf("%d", p+i);
    }
    for (; p<a+10; p++)
    {
        if (*p % 2 == 0)
        {
            if (flag)
            {
                max = *p;
                flag = 0;
            }
            else
            {
                if (*p > max)
                {
                    max = *p;
                }
            }
        }

    }
    if (flag)
    {
        printf("No even numbers\n");
    }
    else
    {
        printf("The largest even nunmber is %d\n", max);
    }

    return 0;
}