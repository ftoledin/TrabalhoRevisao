#include <vector>
#include <iostream>
#include <string>

class Veiculo {
protected:
    std::string marca;
    std::string modelo;
    int capacidade; // Capacidade de carga em toneladas
public:
    Veiculo(const std::string& marca, const std::string& modelo, int capacidade): 
    marca(marca), modelo(modelo), capacidade(capacidade) {}
    virtual void exibirDados() const {
    std::cout << "Marca: " << marca << ", Modelo: " << modelo << ", Capacidade: " << capacidade << " Toneladas\n";
    }
};
class Caminhao : public Veiculo {
private:
    int eixos;
public:
    Caminhao(const std::string& marca, const std::string& modelo, int capacidade, int eixos): 
    Veiculo(marca, modelo, capacidade), eixos(eixos) {}
    void exibirDados() const override {
    std::cout << "Caminhao - ";
    Veiculo::exibirDados();
    std::cout << "Eixos: " << eixos << "\n";
    }
};

class Van : public Veiculo {
private:
    int passageiros;
public:
    Van(const std::string& marca, const std::string& modelo, int capacidade, int passageiros):
    Veiculo(marca, modelo, capacidade), passageiros(passageiros) {}
    void exibirDados() const override {
    std::cout << "Van - ";
    Veiculo::exibirDados();
    std::cout << "Passageiros: " << passageiros << "\n";
    }
};





int main() {
    std::vector<Veiculo*> veiculos;

    veiculos.push_back (new Van("Mercedes", "Sprinter", 3, 21));
    veiculos.push_back (new Van("Fiat", "Ducato", 1, 19));
    veiculos.push_back (new Van("Renault", "Master", 2, 22));
    veiculos.push_back (new Caminhao("Volvo", "FH 540", 80, 4));
    veiculos.push_back (new Caminhao("Mercedes", "ACTROS 2653", 80, 3));
    veiculos.push_back (new Caminhao("Scania", "G 540", 150, 5));

    for (Veiculo* veiculo : veiculos) {
        veiculo->exibirDados();
    }
    for (Veiculo* veiculo : veiculos) {
        delete veiculo;
    }

    return 0;
}