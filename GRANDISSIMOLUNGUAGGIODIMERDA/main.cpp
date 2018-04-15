#include <iostream>
#include <string>

/**
 *
 */

int main(){
    //Stringhe di merda, array di merda e char di merda
    int b{3};
    int *a{&b};
    char myword1[] { 'H', 'e', 'l', 'l', 'o', '\0' };
    char* ptr1;
    ptr1 = myword1;
    *(ptr1+1) = 'Z';
    std::cout<<*(ptr1+1)<<std::endl;
    std::cout<<myword1<<std::endl;

    std::cout<<"=============="<<std::endl;

    char myword2[] {"Hello"};
    char* ptr2;
    ptr2 = myword2;
    *(ptr2+1) = 'Z';
    std::cout<<*(ptr2+1)<<std::endl;
    std::cout<<myword2<<std::endl;

    std::string str{"Ola"};

    std::cout<<str<<std::endl;
    char *s {"Hello world"};
    s = "Aids";
    char c[] = "culo";
    s = c;
    *s='P';
    std::cout<<*s<<std::endl;







    std::cout<<"\n\nEND"<<std::endl;
    return 0;
}
