#include <stdio.h>

#define MAX 100000000

main()
{
    long int sum = 0;
    /*sum = (MAX + 1) * MAX / 2;*/
    /*printf("%ld\n", sum);*/
    int a = sizeof(int);
    int b = sizeof(long);
    int c = sizeof(double);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}
