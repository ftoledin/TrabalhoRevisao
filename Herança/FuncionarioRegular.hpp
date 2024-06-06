#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR
#include "funcionario.hpp"
#include <string>
using std::string;

class FuncionarioRegular : public Funcionario 
{
public:
    FuncionarioRegular(string nome, int id, double salarioBase);
    double calcularSalarioTotal();
};

#endif