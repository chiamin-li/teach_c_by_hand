# include <stdio.h>

int main(void)
{
    int i = 3, *j;
    int *p;
    
    //*p = i; p还没有指向有效的地址，不能这么初始化。指针变量初始化必须赋给地址值。
    j = &i;
    p = j;
    // int *j = &i;
    printf("*j = %d\n", *j);
    printf("j = %d\n", j);
    printf("p = %d\n", p);

    return 0;
}