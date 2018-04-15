#include <iostream>
#include "frazione.h"

using namespace std;

int Frazione::m_statico = 13;

Frazione::Frazione(int numeratore, int denominatore)
    : m_numeratore{numeratore}, m_denominatore{denominatore},
      m_bogus {new int{42}}
{

}

//Distruttore
Frazione::~Frazione(){
    cout << "Distruggo " << m_numeratore << "/"
         << m_denominatore << endl;
    delete m_bogus;
}


Frazione Frazione::operator +(const Frazione& b){
    Frazione tmp = *this;

    return tmp;
}

int Frazione::num() const {
    return m_numeratore;
}

void Frazione::num(int numeratore){
    m_numeratore = numeratore;
}

int Frazione::den() const {
    return m_denominatore;
}

void Frazione::den(int denominatore){
    m_denominatore = denominatore;
}
