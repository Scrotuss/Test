#include <iostream>
#include "docente.h"
#include "collaboratore.h"

using namespace std;


class Base{
public:
    virtual void f(int x){
        cout << "Base" << endl;
    }
};


class Derivata : public Base{
public:
    void f(int x){
        cout << "Derivata" << endl;
    }
};


int main()
{

    //Collaboratore c{"Aldo", "ISIN", 3333};

    std::cout<<"dio ane"<<std::endl;
    Derivata d;
    Base& x{d};
    x.f(1);
    d.f(3);


    return 0;
}
