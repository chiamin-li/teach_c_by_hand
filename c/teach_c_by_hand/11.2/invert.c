# include <stdio.h>
# define NUM 9

int main(void)
{
    int a[NUM] = {1, 2, 3};
    int buf;  //intermediate variables in interchange
    int i, j;  //array indexes

    for (i=0, j=NUM-1; i<j; ++i, --j)
    {
        buf = a[i];
        a[i] = a[j];
        a[j] = buf;
    }
    for (i=0; i<NUM; ++i)
    {
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}