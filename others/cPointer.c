#include<stdio.h>

void funcA() {
    printf("funcA()\n");
}

main() {
int a = 2;
int* b;
int **c;

void * pfun = &funA;
b =  &a;
c = &b;

int* pa = &a;
int * pa2 = &a;
 //int d = (int*) &a;
 long int d =  &a;
unsigned long int ld = 2147483647 + (unsigned long)1;//if not cast 1, ld will be -2147483647
//unsigned int d = &a;

    printf("-----1---------\n");
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long int));
    printf("%d\n",sizeof(int*));
    printf("------2--------\n");
    printf("d d:%d\n",d);
    printf("*d d:%d\n",*(int*)d);

    d = &ld;

    printf("-------3-------\n");
    printf("ld d:%d\n",ld);
    printf("ld d:%u\n",ld);
    printf("ld ld:%ld\n",ld);
    printf("ld ld:%ld\n",ld);
    printf("ld ld:%lu\n",ld);
    printf("*d d:%ld\n",*(long int*)d);
    printf("*d d:%lu\n",*(unsigned long int*)d);

    printf("--------4------\n");
    printf("d a:%d\n",a);
    printf("p a:%p\n",a);
    printf("d b:%d\n",b);
    printf("x b:%x\n",b);
    printf("p b:%p\n",b);
    printf("d c:%d\n",c);
    printf("p c:%p\n",c);
    printf("d *c:%d\n",*c);
    printf("p *c:%p\n",*c);
    printf("---------5-----\n");
    c = &a;
    printf("c:%d\n",c);
    //printf("*a:%d\n",*a);
    //printf("*c:%d\n",*c);
    //printf("**c:%d\n",**c);

    printf("--------test p---------\n");
    printf("pa %p, %x\n",pa);
    printf("pa2 %p, %x\n",pa2);
    pa2 = NULL;
    printf("pa2 %p, %x\n",pa2);
}
