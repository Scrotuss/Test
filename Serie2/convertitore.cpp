#include <iostream>
#include <fstream>
#include "convertitore.h"
#include <string>



Convertitore::Convertitore(std::string valuta1, std::string valuta2, double tasso)
    : m_valuta1{valuta1}, m_valuta2{valuta2}, m_tasso{tasso}
{
    std::cout<<"Creato"<<std::endl;
}

double Convertitore::operator<<(double d){
    std::cout<<"Operator2 <<"<<std::endl;
    std::cout.operator<<("Operator")<<(std::endl);
    std::cout<<"Operator3 <<"<<std::endl;
    return convert(d);
}

double Convertitore::operator>>(double d){
    return iconvert(d);
}




void Convertitore::displayInfo(){
    std::cout<<"\n======TASSO DI CAMBIO====="<<std::endl;
    std::cout<<m_valuta1<<"\t\t"<<m_valuta2<<std::endl;
    std::cout<<m_tasso<<"\t\t"<<1<<std::endl;
    std::cout<<"==========================\n"<<std::endl;
}

void Convertitore::convertFromFile(std::string filePath){

    std::string message = "Hello World!\n";

    // This works
    std::cout << message;

    // Compiler error
    //std::cout.operator <<(message);

    std::string str{"xo"};

    std::ifstream inputFile;
    inputFile.open(filePath);
    std::cout<<"Converting from file: "<<filePath<<std::endl;
    double d;
    if(!inputFile.eof()){
        inputFile >> d;
        while (!inputFile.eof()) {
            if(inputFile.fail()){
                std::cerr<<"ERRORE"<<std::endl;
                break;
            }
            std::cout<<"EUR: "<<d<<"--> CHF: "<<convert(d)<<std::endl;

            inputFile >> d;
        }

    }




    /*Experiment
    char s[20];
    char *myChar;
    myChar = s;
    std::size_t size{10};
    inputFile.get(myChar, size);
    std::cout<<myChar<<std::endl;*/

    /*while(!inputFile.eof()){
        inputFile.get(myChar);
        std::cout<<myChar;
    }*/




    /*
    std::getline(inputFile, str);
    std::cout<<str<<std::endl;

    std::string s {"2.4234   23"};


    double d;

    d = std::stod(s);
    std::cout<<d<<::std::endl;

    d = std::stod(s);
    std::cout<<d<<::std::endl;
    */

    inputFile.close();
}

void saluti(){
    std::cout<<"ciao"<<std::endl;
}
