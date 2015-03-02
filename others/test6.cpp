#include<stdio.h>
#include<iostream>

class A {
    public:
    A() {doSth();}
    virtual void doSth() {
        std::cout<<"I'm A"<<std::endl;
    }
    void doOthers(class A& a) {
        a.doSth();
    }
};

class B:public A {
    public:
    virtual void doSth() {
        std::cout<<"I'm B"<<std::endl;
    }
    void doMyself() {
        doOthers(*this);
    }
};

class Sample
{
public:
    int *ptr;
    Sample(int i) {
        ptr = new int(i);
    }
    ~Sample() {
        std::cout<<"~Sample()"<<std::endl;
    delete ptr;
    }
    void PrintVal() {
        std::cout<< "The value is " << *ptr;
    }
};

void SomeFunc(Sample x) {
    std::cout<<"Say i as in SomeFunc" <<std::endl;
}

int main() {
int const* p = (int *)5;
printf("%d\n",p);

//    B b;
//    A *a = &b;
//    a->doSth();
//    b.doMyself();
    Sample s1 =10;
    SomeFunc(s1);
    s1.PrintVal();


}
