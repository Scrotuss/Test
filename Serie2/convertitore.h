#ifndef CONVERTITORE_H
#define CONVERTITORE_H

#include<iostream>


class Convertitore{
public:
    Convertitore(std::string, std::string, double = 1);
    double operator<<(double);
    double operator>>(double);
    void displayInfo();
    double convert(double chf) {return chf/m_tasso;}
    double iconvert(double eur){return eur*m_tasso;}
    void convertFromFile(std::string);

private:
    std::string m_valuta1;
    std::string m_valuta2;
    double m_tasso;
};


void saluti();


#endif // CONVERTITORE_H


