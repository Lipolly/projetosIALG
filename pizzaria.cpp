#include <iostream>
#include <cmath>
using namespace std;
struct clientes{
	string nome;
	float cordx;
	float cordy;
	float valor;
	float distancia;
};

void calculo(clientes *cliente, int pizzaria[], int tot){
	float valorx, valory;
	for(int i = 0; i < tot; i++){
		valorx = ((cliente[i].cordx - pizzaria[0]) * (cliente[i].cordx - pizzaria[0]));
		valory = ((cliente[i].cordy - pizzaria[1]) * (cliente[i].cordy - pizzaria[1]));		
		cliente[i].distancia = sqrt(valorx + valory);
	};
}

void ordem(clientes *cliente, int tot){
    float valorPivo, valorpiVo, valor;
    int j;	
    for(int i = 1; i < tot; i++){    		
		valorPivo = cliente[i].distancia;
		valorpiVo = cliente[i].valor;
		j = i - 1;
		while((j >= 0) and (valorPivo < cliente[j].distancia)){
			cliente[j+1].distancia = cliente[j].distancia;
			cliente[j+1].valor	= cliente[j].valor;		
			j--;
		};
		cliente[j+1].distancia = valorPivo;		
		cliente[j+1].valor	= valorpiVo;				
    };
    if(tot > 1){
		for(int i = 0; i < tot-1; i++){
			valor = valor + cliente[i].valor;
		};
		cout << valor << endl;
	}
	else if(tot == 1){
		cout << cliente[0].valor << endl;
	};
}

void leitura(clientes *cliente, int tot){
	for(int i = 0; i < tot; i++){
		cin.ignore();
		getline(cin,cliente[i].nome);			
		cin >> cliente[i].cordx;	
		cin >> cliente[i].cordy;
		cin >> cliente[i].valor;
		cin.ignore();		
	};
}

int main(){
	int aval, tot;
	
	cin >> aval;
	
	int pizzaria[aval];
	
	for(int i = 0; i < aval; i++){
		cin >> pizzaria[i];
	};
	cin >> tot;
	clientes cliente[tot];
	leitura(cliente, tot);
	calculo(cliente, pizzaria, tot);
	ordem(cliente, tot);
	return 0;
}
