#include<string>
#include<iostream>
#include<sstream>
#include<cstdlib>
#include<cstring>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
    int a = 10;
    //char *intStr = itoa(a);
    //string str0 = string(intStr);

    stringstream ss;
    ss << a;
    string str1 = ss.str();
    //cout<<"str0:"<<str0<<",str1:"<<str1<<endl;
    printf("%s\n,",ss.str().c_str());
    cout<<",str1:"<<str1<<endl;

    return 0;
}
