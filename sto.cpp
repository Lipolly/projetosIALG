#include<iostream>
using namespace std;
struct batalhao{
	string nome;
	string planeta;
	int bat;
};

struct planetas{
	string nome;
	int num;
	float media;
};

void busc(int aval, batalhao *soldado, planetas *planeta){
	float numero, e;
	string vazio;
	numero = 0;
	e = 0;
	vazio = "nada";
	for(int i = 0; i < aval; i++){
		for(int x = 0; x < aval; x++){
			if(soldado[i].planeta == soldado[x].planeta){
				numero = numero + soldado[x].bat;
				e = e + 1;
				if(x != i){
					soldado[x].planeta = vazio;
				};
			};
		};
		planeta[i].media = numero / e;
		planeta[i].num = e;
		numero = 0;
		e = 0;
	};
	for(int i = 0; i < aval; i++){
		if(soldado[i].planeta != vazio){
			cout << planeta[i].nome << " " << planeta[i].num << " " << planeta[i].media << endl;
		};
	};
}

int main(){
	int aval;
	
	cin >> aval;
	
	batalhao soldado[aval];
	planetas planeta[aval];
	
	for(int i = 0; i < aval; i++){
		cin.ignore();
		getline(cin,soldado[i].nome);
		getline(cin,soldado[i].planeta);
		planeta[i].nome = soldado[i].planeta;
		cin >> soldado[i].bat;
	};
	
	busc(aval, soldado, planeta);
	return 0;
}
