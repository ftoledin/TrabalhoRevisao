#ifndef GERENTE
#define GERENTE
#include "funcionario.hpp"
#include <string>
using std::string;

class Gerente : public Funcionario 
{
private:
    double bonusAnual;
public:
    Gerente(string nome, int id, double salarioBase, double bonusAnual);
    double calcularSalarioTotal();
};

#endif