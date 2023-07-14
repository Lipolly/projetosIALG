#include <iostream>
#include <cmath>
using namespace std;
struct produtos{
	int identificador;
	string descricao;
	float valor;
};

void calculo(produtos *produto, float valmin, float valmax, int aval){
	for(int i = 0; i < aval; i++){
		if((produto[i].valor >= valmin) and (produto[i].valor <= valmax)){
			cout << produto[i].identificador << " " << '"' << produto[i].descricao << '"' << " " << produto[i].valor << endl;
		};
	};
}

void ordem(produtos *produto, int aval){
    float valorPivo;
    int valorpiVo;
    string valorpIvo;
    int j;	
    for(int i = 1; i < aval; i++){    		
		valorPivo = produto[i].valor;
		valorpiVo = produto[i].identificador;
		valorpIvo = produto[i].descricao;
		j = i - 1;
		while((j >= 0) and (valorPivo < produto[j].valor)){
			produto[j+1].valor = produto[j].valor;
			produto[j+1].identificador	= produto[j].identificador;	
			produto[j+1].descricao = produto[j].descricao;	
			j--;
		};
		produto[j+1].valor = valorPivo;		
		produto[j+1].identificador = valorpiVo;	
		produto[j+1].descricao = valorpIvo;			
    };
}

void leitura(produtos *produto, int aval){
	for(int i = 0; i < aval; i++){			
		cin >> produto[i].identificador;
		cin.ignore();	
		getline(cin,produto[i].descricao);
		cin >> produto[i].valor;	
		cin.ignore();	
	};
}

int main(){
	int aval;
	float valmin, valmax;
	
	cin >> aval;
	
	produtos produto[aval];

	leitura(produto, aval);
	ordem(produto, aval);		
	cin >> valmin;
	cin >> valmax;
	calculo(produto, valmin, valmax, aval);

	return 0;
}
