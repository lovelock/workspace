/*
 * =====================================================================================
 *
 *       Filename:  introduction.c
 *
 *    Description:  introduction
 *
 *        Version:  1.0
 *        Created:  04/03/2014 10:50:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
/* getchar()
int main()
{
    int c;
    c = getchar();
    while ((c = getchar()) != EOF)
    {
        putchar(c);
        c = getchar();
    }
    return 0;
}
*/

/*  EOF 
int main()
{
    int c = getchar() != EOF;
    int c = EOF;
    printf("%d\n",c);
    return 0;
}
*/

/*number of characters*/
main()
{
    /*long nc;*/
    /*float nc;*/
    /* version 1
    while (getchar() != EOF)
    {
        ++nc;
    }
    printf("%ld\n", nc);
    */
    /*
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
    */
    /*
    int nl, c;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
        if (c == '\t')
        if (c == '\'l)
            ++nl;
    printf("%0.0d\n", nl);
    */
    char c;
    while((c = getchar()) != EOF)
    {
        switch(c)
        {
            case '\n':
                printf("\\n");
                break;
            case '\t':
                printf("\\t");
                break;
            case '\b':
                printf("\\b");
                break;
            case '\\':
                printf("\\\\");
                break;
            default:
                putchar(c);
        }
    }
}
