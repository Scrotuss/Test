#ifndef FRAZIONE_H
#define FRAZIONE_H


class Frazione{

public:
    Frazione(int numeratore = 0, int denominatore = 1);
    ~Frazione(); //distruttore
    int num() const; //const dice che lo stato del oggetto non sará modificato
    void num(int numeratore);
    int den() const; //getter
    void den(int denominatore); //setter

    Frazione operator+(const Frazione& b);

    static int statico(){
        return m_statico;
    }

    friend void debug(const Frazione& f);

private:
    int m_numeratore {0}, m_denominatore {1};//Di default sono già privati
    int* m_bogus;
    static int m_statico;
};



#endif // FRAZIONE_H
