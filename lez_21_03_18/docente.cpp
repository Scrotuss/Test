#include "docente.h"
#include <iostream>

Docente::Docente(std::string nome, std::string istituto, int nr, std::string circlostudi, std::string corso)
    : Collaboratore{nome, istituto, nr}, m_ciclostudi{circlostudi}, m_corso{corso}
{


}

Docente::~Docente(){
    std::cout << "Distruggo docente" << std::endl;
}

std::string Docente::circlostudi() const{
    return m_ciclostudi;
}

std::string Docente::corso() const {
    return m_corso;
}
