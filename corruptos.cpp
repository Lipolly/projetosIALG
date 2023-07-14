#include <iostream>
#include <fstream>
using namespace std;
struct politicos{
	string nome;
	string partido;
	float dinheiro;
};
void intercala(politicos *politico, int inicio, int meio, int aval){
	int i, j, tamanho, v;
	tamanho = aval - inicio + 1;
    int aux[tamanho];
    i = inicio;
    j = meio + 1;
    for(v = 0; v < tamanho; v++){
		if((i <= meio) and (j <= aval)){
			if(politico[i].dinheiro >= politico[j].dinheiro){
				aux[v] = politico[i].dinheiro;
				i++;
            }
            else{
                aux[v] = politico[j].dinheiro;
                j++;
            };
        }
        else if(i > meio){
            aux[v] = politico[j].dinheiro;
            j++;
        }
        else{
            aux[v] = politico[i].dinheiro;
            i++;
		};
	};
	for(v = 0; v < tamanho; v++){
		politico[inicio + v].dinheiro = aux[v];
	};
}
void mergesort(politicos *politico, int inicio, int aval){
	int meio;
    if(inicio < aval){
		meio = (inicio + aval)/2;
        mergesort(politico, inicio, meio);
        mergesort(politico, meio + 1, aval);
		intercala(politico, inicio, meio, aval);
	};
}
void ordem(politicos *politico, int aval, int aux[], string auxT[]){
	int i, x;
	for(i = 0; i < aval; i++){
		for(x = 0; x < aval; x++){
			if(aux[x] == politico[i].dinheiro){
				auxT[i] = politico[x].nome;
			};
		};
	};
}
void gravar(string auxT[], int aval){
	int i;
	ofstream arquivo("relacao_corruptos.txt");
	for(i = 0; i < aval; i++){
		arquivo << auxT[i] << endl;
	};
}
int main(){ 
	int aval, i, inicio;
    cin >> aval;
    politicos politico[aval];
    int aux[aval];
    string auxT[aval];
    for(i = 0; i < aval; i++){
		cin >> politico[i].nome;
        cin >> politico[i].partido;
        cin >> politico[i].dinheiro;
		aux[i] = politico[i].dinheiro;
	}
	inicio = 0;
    mergesort(politico, inicio, aval);
    ordem(politico, aval, aux, auxT); 
    gravar(auxT, aval);     
    return 0;
}
