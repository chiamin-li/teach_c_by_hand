# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    // int *p = (int *)malloc(sizeof(*p) * 5);
    
    // *p = 5;
    // *(p+1) = 10;

    // printf("*p = %d\n", *p);
    // printf("*(p+1) = %d\n", *(p+1));
    // printf("*(p+2) = %d\n", *(p+2));


    int i = 10;
    int *p = &i;
    int **q = &p;
    int ***r = &q;

    printf("%d\n", ***r);
    return 0;
}