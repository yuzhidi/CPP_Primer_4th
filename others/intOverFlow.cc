#include <iostream>
using std::cout;
using std::endl;

int main()
{
    // warning: overflow in implicit constant conversion [-Woverflow]
    // int  cua = 9223372036854775807;
              int  ca =4294967295;
    unsigned int  cua =4294967295;
    std::cout << "ca:"<< ca <<endl<<"cua:"<< cua  << std::endl;
    std::cout << "ca:"<< ca +1 <<endl<<"cua:"<< cua  +1<< std::endl;
    std::cout << "ca:"<< ca +2 <<endl<<"cua:"<< cua  +2<< std::endl;
    return 0;
}
/*

ca:-1
cua:4294967295
ca:0
cua:0
ca:1
cua:1

*/
