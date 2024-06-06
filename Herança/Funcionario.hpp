#ifndef FUNCIONARIO
#define FUNCIONARIO
#include <string>
using std::string;

class Funcionario 
{
protected:
    string nome;
    int id;
    double salarioBase;

public:
    Funcionario(string nome = "", int id = 0, double salarioBase = 0.0) :
        nome(nome), id(id), salarioBase(salarioBase) {}

    virtual double calcularSalarioTotal() = 0;
};

#endif