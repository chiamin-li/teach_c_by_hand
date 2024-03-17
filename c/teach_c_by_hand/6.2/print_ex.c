# include <stdio.h>


int main(void)
{

    int i = 314;
    int a = 0x13a;  //计算机可以识别十六进制
    int b = 0B10;
    int c = 0472;
    float j = 3.1415926;
    char ch = 'p';  //char只能定义单个字符，字符串用char列表

    printf("i = %2d\n", i);  //按照实际位数输出
    printf("i = %#X\n", i);  //用十六进制表示
    printf("i = 0O%o\n", i);  //用八进制表示
    printf("a = %#X\n", a);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = 0O%o\n", c);
    printf("c = %d\n", c);
    printf("j = %.2f\n", j);
    printf("p = %c\n", ch);

    return 0;
}