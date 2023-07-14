#include <iostream>
#include <fstream>
using namespace std;
struct politicos{
	string nome;
	string partido;
	float dinheiro;
};

void intercala(politicos *v, int inicio, int meio, int pFim){
    int i = inicio, j = meio;
    int tamanho = pFim - inicio + 1;
    int w[tamanho];
    string z[tamanho];
    int k = 0;
    while ((i < meio) and (j <= pFim)) {                
       if(v[i].dinheiro <= v[j].dinheiro) {
           w[k++] = v[i++].dinheiro;
           z[k++] = v[i++].nome;
		} 
		else {
			w[k++] = v[j++].dinheiro;
			z[k++] = v[i++].nome;    
		}
	}                      
	while (i < meio) {
		w[k++] = v[i++].dinheiro;
		z[k++] = v[i++].nome;    
	}   
    while (j <= pFim) {
       w[k++] = v[j++].dinheiro;
       z[k++] = v[i++].nome;     
    }
	for (int m = 0; m < tamanho; m++){ 
		v[inicio + m].dinheiro = w[m];
		v[inicio + m].nome = z[m];    
    }
}
	
void mergesort(politicos *v, int inicio, int pFim){
	int meio;
	if (inicio < pFim) {
		meio = (inicio + pFim)/2; 
		mergesort(v, inicio, meio);
		mergesort(v, meio+1, pFim);
		intercala(v, inicio, meio, pFim);
		cout << endl << inicio << endl << pFim << endl << meio << endl;
	}
}
void gravar(politicos *v, int &t){
	ofstream saida("relacao_corruptos.txt");
	saida.write((char*) &t, sizeof(int));
	for(int j = 0; j < t; j++){
		saida.write((char *) &v[j], sizeof(politicos));
	};
}

int main(){
	int t, i, pFim, inicio;
	
	cin >> t;
	pFim = t - 1;
	
	politicos v[t];
	
	for(i = 0; i < t; i++){
		cin >> v[i].nome;
		cin >> v[i].partido;			
		cin >> v[i].dinheiro;
	};
	inicio = 0;
	mergesort(v, inicio, pFim);
//	gravar(v, t);
	return 0;
}
