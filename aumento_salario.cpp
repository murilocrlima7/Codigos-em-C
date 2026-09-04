/*
	Escreva um programa que receba o salário de um funcionário. Para salários de até R$
2.000,00, aplique um aumento de 15%. Para salários superiores a esse valor, aplique
um aumento de 8%. Apresente o valor do aumento e o novo salário.
*/
#include<iostream>
using namespace std;

int main()
{
	float salario;
	cout << "Informe o salario: ";
	cin >> salario;
	if(salario <= 2000)
	{
		cout << "Valor do aumento = " << salario*0.15 << "R$"<< endl;
		cout << "Salario final = " << salario+(salario*0.15) << "R$";
	}
	else
	{
		cout << "Valor do aumento = " << salario*0.08 << "R$"<< endl;
		cout << "Salario final = " << salario+(salario*0.08) << "R$";
	}
	return 0;

}