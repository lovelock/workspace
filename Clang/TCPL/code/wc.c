/*
 * =====================================================================================
 *
 *       Filename:  wc.c
 *
 *    Description:  main code of gnu wc
 *
 *        Version:  1.0
 *        Created:  04/04/2014 03:33:31 PM
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

#define IN 1
#define OUT 0

main()
{
    /*
     * c for character
     * nl for number fo lines
     * nw for number of words
     * nc for number of characters
     */
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}

