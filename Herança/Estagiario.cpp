#include "Estagiario.hpp"
#include <string>
using std::string;

Estagiario::Estagiario(string nome, int id, double salarioBase) :
Funcionario(nome, id, salarioBase){}

double Estagiario::calcularSalarioTotal(){
    return salarioBase *0.7; //O salario do estagiario sera de 70% do salario base
}