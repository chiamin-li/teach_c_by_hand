# include <stdio.h>

int main(void){
    /*calculate how many bytes the system has allocated for each data type*/

    int a = 128;
    short b = 2;
    long c = 3;

    float d = 2e-2f;
    double e = 2e-2;

    char f = a;

    // printf("int = %d\n", sizeof(a));
    // printf("short = %d\n", sizeof(b));
    // printf("long = %d\n", sizeof(c));
    // printf("float = %d\n", sizeof(d));
    // printf("double = %d\n", sizeof(e));
    // printf("char = %d\n", sizeof(f));


    /*another way to see the number of bytes*/
    
    // printf("int = %d\n", sizeof(int));
    // printf("short = %d\n", sizeof(short));
    // printf("long = %d\n", sizeof(long));
    // printf("float = %d\n", sizeof(float));
    // printf("double = %d\n", sizeof(double));
    // printf("char = %d\n", sizeof(char));


    /*printf method*/
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %f\n", d);
    printf("e = %f\n", e);
    printf("f = %d\n", f);  /*when f was assigned the value 128, the overflow happened*/

    return 0;

}