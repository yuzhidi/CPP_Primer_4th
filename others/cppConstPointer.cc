#include<iostream>
using std::cout;
using std::endl;

int main() {
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
}
/*
3.14
6.66
12.2
*/

