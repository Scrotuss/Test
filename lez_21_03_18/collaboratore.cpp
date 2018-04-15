#include "collaboratore.h"
#include <iostream>

Collaboratore::Collaboratore(std::string nome, std::string istituto, int nr)
    :m_nome{nome}, m_istituto{istituto}, m_nrcollaboratore{nr}
{
    std::cout << "Collaboratore creato" << std::endl;
}

Collaboratore::~Collaboratore(){
    std::cout << "Collaboratore distrutto" << std::endl;
}


std::string Collaboratore::nome() const{
    return m_nome;
}

std::string Collaboratore::istituto() const{
    return m_istituto;
}

int Collaboratore::nrcollaboratore() const{
    return m_nrcollaboratore;
}
