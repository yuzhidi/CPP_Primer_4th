void ff(int) {};
void ff(double) {};

main() {
    //error: no matches converting function ‘ff’ to type ‘void (*)(unsigned int)’
    //void (*pf)(unsigned int) = &ff; // ff(unsigned)
    void (*pf1)(int) = &ff;
    void (*pf2)(double) = &ff;
}
