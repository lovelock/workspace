/*
 * =====================================================================================
 *
 *       Filename:  arguments.cc
 *
 *    Description:  3 methods of transfering arguments
 *
 *        Version:  1.0
 *        Created:  04/07/2014 03:41:59 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Frost Wong (Qingchun Wang), frostwong@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>

using namespace std;
//main()
//{
    //void swap(int, int);
    //int i = 3;
    //int j = 4;
    //cout << "i = " << i << ", j = " << j << endl;
    //swap(i, j);
    //cout << "i = " << i << ", j = " << j << endl;
//}

//void swap(int a, int b)
//{
    //int temp;
    //temp  = a;
    //a = b;
    //b = temp;
//}
//
main()
{
    void swap(int*, int*);
    int i = 3, j = 4;
    cout << "i = " << i << ", j = " << j << endl;
    swap(&i, &j);
    cout << "i = " << i << ", j = " << j << endl;
}

void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
