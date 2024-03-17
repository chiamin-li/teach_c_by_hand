# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    int a[5][5] = {{1, 3, 5, 7, 9}, {2, 4, 6, 8, 10}};
    int b;

    b = a[0] == &a[0][0];
    // b = a == &a[0][0];  //编译不通过
    printf("*(a+1)+1=%d\n", *(a+1)+1);
    printf("*(a+2)=%d\n", *(a+2));
    printf("&a[1][1]=%d\n", &a[1][1]);
    printf("&a[2][0]=%d\n", &a[2][0]);
    printf("b = %d\n", b);
    printf("&a[0] == a?%d\n", &a[0] == a);
    // printf("&(&a[0][0]) == a?%d\n", &(&a[0][0]) == a);  //编译不通过

    return 0;
}