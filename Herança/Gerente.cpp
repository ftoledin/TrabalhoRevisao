#include "Gerente.hpp"
#include <string>
using std::string;

Gerente::Gerente(string nome, int id, double salarioBase, double bonusAnual) :
Funcionario(nome, id, salarioBase), bonusAnual(bonusAnual){}

double Gerente::calcularSalarioTotal(){
    return salarioBase + bonusAnual;
}