#include <iostream>
#include <string>
#include <fstream>
#include "convertitore.h"


static double tasso{1.2};
static const std::string CHF {"CHF"};
static const std::string EUR {"EUR"};

double convert(double chf){
    return chf/tasso;
}

double iconvert(double eur){
    return eur*tasso;
}

double convert2(double& chf){
    return chf/tasso;
}



void init(){
    std::cout << ("Inserire tasso di cambio: ") << std::endl;
    std::cin >> tasso;
    while(std::cin.fail() || tasso <= 0){
        std::cout << ("Inserire un tasso di cambio valido: ") << std::endl;
        std::cin.clear();   //Pulisce i flag di errore
        std::cin.ignore(20, '\n');  //ignora i prossimi 20 caratteri nel buffer o quando arriva alla fine
        std::cin >> tasso;
    }
    std::cout << "Il cambio è: " << tasso << std::endl;
}

void displayInfo(){
    std::cout <<"CHF\tEURO\n"<<tasso<<"\t1"<<std::endl;
}


//template <typename T>
//struct is_swapable
//{
//    static const bool  value = false;
//};




int main()
{

    operator<<(std::cout, "aids");

    saluti();
    Convertitore conv{"CHF","EUR",1.4};
    conv.displayInfo();
//    std::cout<<conv.convert(2.8)<<std::endl;
//    conv.convertFromFile("myfile");
    double d{3};
    std::cout<<d<<std::endl;
    std::cout<<(conv<<d)<<std::endl;
    /*init();
    displayInfo();
    std::cout<<iconvert(10)<<std::endl;*/


    /*double a, b;
    double *x, *y;
    a = 120;
    x = &a;
    y = &b;

    b = convert(*x);
    *y = convert2(b);

    a = 240;
    a = convert(a);

    std::cout << "a: " << a << "\nb: " << b << std::endl;*/

    return 0;
}
