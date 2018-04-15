#include <iostream>
#include <string>
#include <fstream>
#include "frazione.h"
#include "test.h"


void debug(const Frazione& f){
    std::cout << f.m_numeratore << std::endl;
}

void ese1(){
    const int THISYEAR{2018};
    std::string yourName;
    int birthYear = 0;
    std::cout << "What is your name? " << std::flush;
    std::getline(std::cin, yourName);
    std::cout << "What year were you born? " ;
    std::cin >> birthYear;

    while(std::cin.fail()){
        std::cout << "What year were you born? " << std::endl;
        std::cin.clear();
        std::cin.ignore(20, '\n');
        std::cin >> birthYear;
    }

    if(std::cin.fail()){
        std::cout << "Fail!" << std::endl;
    }
    std::cout << "Your name is " << yourName
              << " and you are approximately "
              << (THISYEAR - birthYear)
              << " years old. " << std::endl;
}

void ese2(){
    int     lucky{7};
    float   pi{3.14};
    double  e{2.71};

    std::ofstream outf;
    outf.open("mydata");
    outf << lucky << std::endl;
    outf << pi << std::endl;
    outf << e << std::endl;
    outf << "This is an example" << std::endl;
    outf.flush();
    outf.close();


    std::ifstream inf;
    inf.open("mydata");
    std::string str;

    /*
    std::getline(inf, str);
    std::cout<<str<<std::endl;
    std::getline(inf, str);
    std::cout<<str<<std::endl;
    std::getline(inf, str);
    std::cout<<str<<std::endl;
    */

    for(std::string line; std::getline(inf, line); line ){
        std::cout<<line<<std::endl;
    }

    inf.close();


}


int main() {


    std::cout<<"Start"<<std::endl;
    Frazione f1{2,3};
    Frazione f2{4,5};

    f1 + f2;




    /*
    std::ifstream inf;
    char* str="ola";
    inf.open("mydata");
    inf.getline(str, 10);
    std::cout << str;

    inf.close();


    //====Cose copiate a caso a lezione=====
    //Frazione sullo stack
    Frazione f;
    debug(f);
    //f.num(7);
    //f.den(5);
    std::cout << f.num() << "/" << f.den() << std::endl;
    //Frazione su heap

    Frazione* f1 {new Frazione{3,4}};

    delete f1;
    return 0;
    */
    //======================================
}
