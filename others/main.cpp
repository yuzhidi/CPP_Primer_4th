#include <iostream>
#include <functional>

using namespace std;

class A {
    public:
        void pubfuncA() {
            cout<<"pubfuncA()"<<endl;
        }

    protected:
        void profuncA() {
            cout<<"profuncA()"<<endl;
        }
};

class B : public A {
    public:
        void pubfuncA() {
            cout<<"pubfuncAB()"<<endl;
        }
#if 1
    protected:
        void profuncA() {
            cout<<"profuncAB()"<<endl;
        }
#endif
};

class C : public B {
    public:
        void pubfuncA() {
            cout<<"pubfuncABC()"<<endl;
            profuncA();
            A::profuncA();
            B::profuncA();
        }
    protected:
        void profuncA() {
            cout<<"profuncABC()"<<endl;
        }
};
int main() {
#if 1
    B b;
    //b.pubfuncA();
    //B *pb = new B();
    //pb->profuncA();
//    b.profuncA();
#endif
    C c;
    cout<<"## c.pubfuncA():"<<endl;
    c.pubfuncA();
    cout<<"## ((A)c).pubfuncA():"<<endl;
    ((A)c).pubfuncA();
    cout<<"## ((B)c).pubfuncA():"<<endl;
    ((B)c).pubfuncA();

    A* pa = new C();
    cout<<"## pa->pubfuncA():"<<endl;
    pa->pubfuncA();
    cout<<"## ((C*)pa)->pubfuncA():"<<endl;
    ((C*)pa)->pubfuncA();
    return 0;
}
/*
## c.pubfuncA():
pubfuncABC()
profuncABC()
profuncA()
profuncAB()
## ((A)c).pubfuncA():
pubfuncA()
## ((B)c).pubfuncA():
pubfuncAB()
## pa->pubfuncA():
pubfuncA()
## ((C*)pa)->pubfuncA():
pubfuncABC()
profuncABC()
profuncA()
profuncAB()

 */
