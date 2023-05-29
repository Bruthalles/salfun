#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL , "Portuguese");
const int MAX_FUNCIONARIOS = 4; // n�mero m�ximo de funcion�rios
double salarioHora, horasTrabalhadas, salarioLiquido, impostoDeRenda, inss;
double salarioTotal[MAX_FUNCIONARIOS] = {0}; // vetor que armazena o sal?rio liquido de cada funcionario

cout<<"Nesta empresa temos 4 funcion�rios."<<endl;
cout<<"Abaixo temos um sistema para calcular o sal�rio"<<endl;
cout<<"de cada um com desconto inss e imposto de renda"<<endl;
cout<<endl;
for (int i = 0; i < MAX_FUNCIONARIOS; i++) {
// leitura das informa�oes do funcionario i
cout << "Informe o sal�rio por hora do funcion�rio " << i+1 << ": ";
cin >> salarioHora;

cout << "Informe o numero de horas trabalhadas por m�s pelo funcion�rio " << i+1 << ": ";
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

// exibi�ao dos salarios liquidos de todos os funcionarios
cout << "\nSal�rios l�quidos dos funcion�rios: \n";
for (int i = 0; i < MAX_FUNCIONARIOS; i++) {
cout << "Funcion�rio " << i+1 << ": R$" << salarioTotal[i] << endl;
}

return 0;
}
