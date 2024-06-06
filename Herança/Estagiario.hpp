#ifndef ESTAGIARIO
#define ESTAGIARIO
#include "funcionario.hpp"
#include <string>
using std::string;

class Estagiario : public Funcionario 
{
public:
    Estagiario(string nome, int id, double salarioBase);
    double calcularSalarioTotal();
};

#endif