#include <iostream>
#include <fstream>

using namespace std;
struct pokemons{
	string nome;
	string tipo;
	int distancia;
};
void ordem(pokemons *pokemon, int aval){
	int j, i;
    int valorPivo;
    string valorpiVo, valorpIvo;
    for(i = 0; i < aval; i++){    		
		valorPivo = pokemon[i].distancia;
		valorpiVo = pokemon[i].nome;
		valorpIvo = pokemon[i].tipo;
		j = i - 1;
		while((j >= 0) and (valorPivo < pokemon[j].distancia)){
			pokemon[j+1].distancia = pokemon[j].distancia;
			pokemon[j+1].nome = pokemon[j].nome;	
			pokemon[j+1].tipo = pokemon[j].tipo;	
			j--;
		};
		pokemon[j+1].distancia = valorPivo;		
		pokemon[j+1].nome = valorpiVo;
		pokemon[j+1].tipo = valorpIvo;
    };
}
void gravar(string lista[], int quantidade){
	int i;
	ofstream arquivoEscrita("pokemon.txt");
	for(i = 0; i < quantidade; i++){
		arquivoEscrita << lista[i] << endl;
	};
}
int main(){
	int aval, i;
	ifstream arquivoLeitura("dados.txt");
	arquivoLeitura >> aval;
	pokemons pokemon[aval];
	for(i = 0; i < aval; i++){
		arquivoLeitura >> pokemon[i].nome >> pokemon[i].tipo >> pokemon[i].distancia;
	};
	ordem(pokemon, aval);
	string tipo;
	int quantidade;
	cin >> tipo;
	cin >> quantidade;
	string lista[quantidade];
	int x = 0;
	for(int i = 0; i < aval; i++){
		if(pokemon[i].tipo == tipo){
			if(x < quantidade){
				lista[x] = pokemon[i].nome;
				x++;
			};
		};
	};
	gravar(lista, quantidade);
	return 0;
}
