#include <iostream>
#include "Funcionario.hpp"
#include "FuncionarioRegular.hpp"
#include "Gerente.hpp"
#include "Estagiario.hpp"
using namespace std;

int main() {
    FuncionarioRegular funcionarioRegular("João", 1, 2000.0);
    Gerente gerente("Maria", 2, 3000.0, 500.0);
    Estagiario estagiario("Pedro", 3, 1500.0);

    cout << "Salario total do Funcionario Regular: " << funcionarioRegular.calcularSalarioTotal() << endl;
    cout << "Salario total do Gerente: " << gerente.calcularSalarioTotal() << endl;
    cout << "Salario total do Estagiario: " << estagiario.calcularSalarioTotal() << endl;

    return 0;
}