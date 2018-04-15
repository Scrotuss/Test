#ifndef COLLABORATORE_H
#define COLLABORATORE_H
#include <string>
#include "icollaboratore.h"

class Collaboratore : public ICollaboratore
{

public:
    Collaboratore(std::string nome, std::string istituto, int nr);
    ~Collaboratore();
    std::string nome() const;
    std::string istituto() const;
    int nrcollaboratore() const;

    std::string nomeclasse() const;

protected:
    std::string m_nome;
    std::string m_istituto;
    int m_nrcollaboratore;

};

#endif // COLLABORATORE_H
