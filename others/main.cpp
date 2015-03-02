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
    c.pubfuncA();
    A* pa = new C();
    pa->pubfuncA();
    ((C*)pa)->pubfuncA();
    ((A)c).pubfuncA();
    ((B)c).pubfuncA();
    return 0;
}
