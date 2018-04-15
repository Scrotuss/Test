#ifndef DOCENTE_H
#define DOCENTE_H
#include "collaboratore.h"


//I metodi pubblic rimangono pubblic in docente
class Docente : public Collaboratore
{
public:
    Docente(std::string nome, std::string istituto, int nr, std::string ciclo, std::string corso);
    ~Docente();
    std::string circlostudi() const;
    std::string corso() const;

    std::string nomeclasse();


protected:
    std::string m_ciclostudi;
    std::string m_corso;
};

#endif // DOCENTE_H
