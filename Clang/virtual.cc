/*
 * =====================================================================================
 *
 *       Filename:  virtual.cc
 *
 *    Description:  virtual function
 *
 *        Version:  1.0
 *        Created:  04/16/2014 10:40:16 AM
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

class Base
{
    public:
        virtual void f() { cout << "Base::f" << endl; }
        virtual void g() { cout << "Base::g" << endl; }
        virtual void h() { cout << "Base::h" << endl; }
};

class derivedBase:Base
{
    public:
        void f1() { cout  << "Base::f" << endl; }
        void g1() { cout  << "Base::g" << endl; }
        void h1() { cout  << "Base::h" << endl; }
};

typedef void(*Fun) (void);

main()
{
    Base b;
    Fun pFun = NULL;
    derivedBase b1;
    Fun derivedpFun = NULL;
    cout << "Address of virtual function table: " << (int*)(&b) << endl;
    cout << "Address of first function in the virtual function table: " << (int*)*(int*)(&b) << endl;
    cout << "Address of first function in the virtual function table: " << ((int*)*(int*)(&b)+1) << endl;
    cout << "Address of first function in the virtual function table: " << ((int*)*(int*)(&b)+2) << endl;
    
    pFun = (Fun)*((int*)*(int*)(&b));
    pFun();

    cout << "Address of virtual function table: " << (int*)(&b1) << endl;
    cout << "Address of first function in the virtual function table: " << (int*)*(int*)(&b1) << endl;
    cout << "Address of first function in the virtual function table: " << ((int*)*(int*)(&b1)+1) << endl;
    cout << "Address of first function in the virtual function table: " << ((int*)*(int*)(&b1)+2) << endl;

    derivedpFun = (Fun)*((int*)*(int*)(&b1));
    derivedpFun();
}
