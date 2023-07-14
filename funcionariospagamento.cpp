#include<iostream>
using namespace std;
struct clientes{
	string nome;
	float cordx;
	float cordy;
	float valor;
};

void ordem(funcionarios *funcionario, int aval){
	int i, j, posMenor;
	float aux;
	
	for (i = 0; i < aval-1; i++) {
		posMenor = i;
		for (j = i + 1; j < aval; j++) {
			if (funcionario[j].salario < funcionario[posMenor].salario){
				posMenor = j;
			};
		};
		aux = funcionario[i].identificador;
		funcionario[i].identificador = funcionario[posMenor].identificador;
		funcionario[posMenor].identificador = aux;
		
		aux = funcionario[i].numtrab;
		funcionario[i].numtrab = funcionario[posMenor].numtrab;
		funcionario[posMenor].numtrab = aux;
		
		aux = funcionario[i].valnumtrab;
		funcionario[i].valnumtrab = funcionario[posMenor].valnumtrab;
		funcionario[posMenor].valnumtrab = aux;
		
		aux = funcionario[i].salario;
		funcionario[i].salario = funcionario[posMenor].salario;
		funcionario[posMenor].salario = aux;								
	};
}

void leitura(funcionarios *funcionario, int aval){
	float sal;
	for(int i = 0; i < aval; i++){
		cin >> funcionario[i].identificador;
		cin >> funcionario[i].numtrab;
		cin >> funcionario[i].valnumtrab;
		sal = funcionario[i].numtrab * funcionario[i].valnumtrab;
		funcionario[i].salario = sal;
	};
};

int main(){
	int aval;
	
	cin >> aval;
	
	funcionarios funcionario[aval];
	
	leitura(funcionario, aval);
	
	ordem(funcionario, aval);
	
	for(int i = 0; i < aval; i++){
		cout << funcionario[i].identificador << " " << funcionario[i].salario << endl;
	};
	return 0;
}
