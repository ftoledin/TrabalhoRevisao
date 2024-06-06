#include "funcionarioregular.hpp"
#include <string>
using std::string;

FuncionarioRegular::FuncionarioRegular(string nome, int id, double salarioBase) :
Funcionario(nome, id, salarioBase){}

double FuncionarioRegular::calcularSalarioTotal(){
    return salarioBase;
}