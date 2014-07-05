#include <stdio.h>

#define MAX 100000000

main()
{
    long i, sum;
    sum = 0;
    for (i = 0; i <= MAX; ++i)
    {
        sum = sum + i;
    }
    printf("%ld\n",sum);
}
