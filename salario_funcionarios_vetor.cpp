#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL , "Portuguese");
const int MAX_FUNCIONARIOS = 4; // número máximo de funcionários
double salarioHora, horasTrabalhadas, salarioLiquido, impostoDeRenda, inss;
double salarioTotal[MAX_FUNCIONARIOS] = {0}; // vetor que armazena o sal?rio liquido de cada funcionario

cout<<"Nesta empresa temos 4 funcionários."<<endl;
cout<<"Abaixo temos um sistema para calcular o salário"<<endl;
cout<<"de cada um com desconto inss e imposto de renda"<<endl;
cout<<endl;
for (int i = 0; i < MAX_FUNCIONARIOS; i++) {
// leitura das informaçoes do funcionario i
cout << "Informe o salário por hora do funcionário " << i+1 << ": ";
cin >> salarioHora;

cout << "Informe o numero de horas trabalhadas por mês pelo funcionário " << i+1 << ": ";
cin >> horasTrabalhadas;
cout<<endl;
// calculo do salario liquido com descontos
salarioLiquido = salarioHora * horasTrabalhadas;
impostoDeRenda = salarioLiquido * 0.11;
inss = salarioLiquido * 0.08;
salarioLiquido -= impostoDeRenda + inss;

// armazenamento do salario liquido do funcionario i no vetor
salarioTotal[i] = salarioLiquido;
}

// exibiçao dos salarios liquidos de todos os funcionarios
cout << "\nSalários líquidos dos funcionários: \n";
for (int i = 0; i < MAX_FUNCIONARIOS; i++) {
cout << "Funcionário " << i+1 << ": R$" << salarioTotal[i] << endl;
}

return 0;
}
