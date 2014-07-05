/*
 * =====================================================================================
 *
 *       Filename:  wc-ext.c
 *
 *    Description:  exercise of 1-12
 *
 *        Version:  1.0
 *        Created:  04/04/2014 03:45:47 PM
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
    int c, state;
    state = OUT;

    while((c = getchar()) != EOF) {

        if (c == ' ' || c == '\n' || c == '\t') {

            if (state == IN) {
                putchar('\n');
                state = OUT;
            } else if (state == OUT) {
                state = IN;
                putchar(c);
            }
        }
        else
            putchar(c);
    }
}
