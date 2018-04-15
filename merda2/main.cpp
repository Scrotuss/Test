#include <iostream>

using namespace std;


class Frazione{

    friend void curioso(Frazione&);
    friend Frazione operator -(Frazione a, Frazione b);

public:
    Frazione() : m_numeratore{0}, m_denominatore{1} { cout << "Frazione vuota" << endl;}
    //    Frazione(const Frazione& o) { cout << "copia" << endl; }
    Frazione(int numeratore, int denominatore=1 ) : m_numeratore{numeratore}, m_denominatore{denominatore} {cout<<"Frazione creata"<<endl; simplify();}
    ~Frazione(){cout<<"Frazione distrutta"<<endl;}
    int getNumeratore() const ;
    void setNum(int num);
    Frazione operator+(const Frazione& b);
    Frazione& operator +=(const Frazione& f);
    bool operator ==(const Frazione& f) const;
    void print(){cout<<m_numeratore<<"/"<<m_denominatore<<endl;}
    string toString() {return string{"Dio cane "};}


private:
    void simplify();
    int m_numeratore, m_denominatore;
};


void curioso(Frazione& f){
    cout << f.m_numeratore << "/" << f.m_denominatore << endl;
}


//=====Definizione delle funzioni della classe Frazione=======
int Frazione::getNumeratore() const{
    return m_numeratore;
}

void Frazione::setNum(int num){
    m_numeratore = num;
}

void Frazione::simplify(){
    int tmpNum{abs(m_numeratore)};
    int tmpDen{abs(m_denominatore)};

    int tmpSign{0};
    if(m_numeratore * m_denominatore > 0){
        tmpSign = 1;
    }else{tmpSign = -1;}


    int i{2};
    while((i <= tmpDen) && (i <= tmpNum)){

        if( (tmpNum%i == 0) && (tmpDen%i == 0) ){
            tmpNum /= i;
            tmpDen /= i;
            i = 2;
            continue;
        }

        i++;
    }
    m_numeratore = tmpSign * tmpNum;
    m_denominatore = tmpDen;
}

bool Frazione::operator ==(const Frazione& f) const{
    if(m_numeratore == f.m_numeratore && m_denominatore == f.m_denominatore) return true;
    else return false;
}

Frazione Frazione::operator+(const Frazione& b)
{
    Frazione temp = *this;
    return temp += b;
}

//Frazione Frazione::operator +(const Frazione& b){
//    int tmp_den = m_denominatore + b.m_denominatore;
//    int tmp_num = m_numeratore + b.m_numeratore;
//    return Frazione{tmp_num, tmp_den};
//}

Frazione& Frazione::operator +=(const Frazione& f){
    if(this == &f){ //Se puntano enrambi allo stesso oggetto fai questo, in questo modo non sto usando l'operatore == che ho definito
        m_numeratore *= 2;
        simplify();
        return *this;
    }

    //==Se invece volessi utilizzare l'operatore == da me implemantato dovrei fare così======
    //    if(*this == f){
    //        m_numeratore *= 2;
    //        return *this;
    //    }
    //========================================================================================
    int temp_numeratore { f.m_numeratore * m_denominatore };
    m_denominatore *= f.m_denominatore;
    m_numeratore *= f.m_denominatore;
    m_numeratore += temp_numeratore;
    cout<<"Dio cane"<<endl;
    simplify();
    return *this;
}


//Funzione esterna
Frazione operator -(Frazione a, Frazione b){
    int tmp_den = a.m_denominatore - b.m_denominatore;
    int tmp_num = a.m_numeratore - b.m_numeratore;
    return Frazione{tmp_num, tmp_den};
}

//=============================================================


class Test{
public:
    Test(int a): m_a{a} {cout<<"Class Test creata"<<endl;}
    void add() {m_a++;}
    ~Test(){cout<<"Class Test distrutta"<<endl;}
    int m_a;
};

Test foo(){
    Test t{5};
    t.add();
    return t;
}

void caller(){
    foo();
    cout<<"End called"<<endl;
}


int main()
{
    Test t{foo()};
    cout<<t.m_a<<endl;
    caller();
//    cout << "Hello aWorld!" << endl;
    Frazione f1{3,2};
    cout<<f1.toString()<<endl;
//    Frazione f2{1,2};
//    cout<<f1.toString() + "fefe"<<endl;
//    Frazione f3(f1-f2);
//    f3.print();

    return 0;
}
