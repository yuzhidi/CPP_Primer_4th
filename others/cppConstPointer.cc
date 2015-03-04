#include<iostream>
using std::cout;
using std::endl;

int main() {
    /* pointer to const object */
    const double *cptr;
    const double pi=3.14;
    cptr = &pi;
    cout<<*cptr<<endl;

    // error: assignment of read-only location ‘* cptr’
    //*cptr=6.6;
    double notConst=6.66;
    cptr=&notConst;
    cout<<*cptr<<endl;

    // error: assignment of read-only location ‘* cptr’
    // *cptr=12.2;
    notConst = 12.2;
    cout<<*cptr<<endl;

    /* const pointer */
    int a=10;
    //  error: uninitialized const ‘constPa’ [-fpermissive]
    //int *const constPa;
    int *const constPa2 = &a;
    cout<<constPa2<<endl;
    cout<<*constPa2<<endl;

    int b = 20;
    //  error: assignment of read-only variable ‘constPa2’
    //constPa2=&b;
    a=b;
    cout<<*constPa2<<endl;

    /* C style string */
    int len=0;
    const char *cp = "some value";
    while (*cp) {
    // do something to *cp
    ++cp;
    ++len;
    }
    std::cout << len << std::endl;
}
/*
3.14
6.66
12.2
0x7fffe3896a68
10
20
10
*/

