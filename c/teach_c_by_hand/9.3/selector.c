# include <stdio.h>

int main(void)
{
    // int i, j;

    // printf("please enter two numbers, separating them by a spaces:");
    // scanf("%d%d", &i, &j);

    // if (i>j)
    // {
    //     printf("%d>%d\n", i, j);
    // }
    // else
    // {
    //     printf("%d<%d\n", i, j);
    // }

    // float score;

    // printf("please enter your score:");
    // scanf("%f", &score);

    // if (score>=90 && score<=100)
    // {
    //     printf("Excellent!\n");
    // }
    // else if (score>=80 && score<90)
    // {
    //     printf("Great!\n");
    // }
    // else if (score>=60 && score<80)
    // {
    //     printf("Pass!\n");
    // }
    // else if (score>=0 && score<60)
    // {
    //     printf("Resit! Keep trying!\n");
    // }
    // else
    // {
    //     printf("Please enter again!\n");
    // }

    /*Sort three integers from smallest to largest*/
    int i, j, k;
    int buf;

    printf("Please enter three integers, \nseparating them by sapces:");
    scanf("%d%d%d", &i, &j, &k);

    if (i > j)
    {
        buf = i;
        i = j;
        j = buf;
    }
    if (i > k)
    {
        buf = i;
        i = k;
        k = buf;
    }
    if (j > k);
    {
        buf = j;
        j = k;
        k = buf;
    }
    printf("%d %d %d\n", i, j, k);

    return 0;
}