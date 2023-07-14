#include <iostream>
#include <iostream>
using namespace std;
void selection_sort(int vetor[], int tam){
    int menor, aux_troca;
    for(int indice=tam-1; indice>=0; indice--){
        menor=indice;
        for(int j=indice-1; j>=0; j--){
            if(vetor[j]<vetor[menor]){
                menor=j;
            }
        }
        aux_troca=vetor[indice];
        vetor[indice]=vetor[menor];
        vetor[menor]=aux_troca;
		for(int f=0; f<tam; f++){
			cout<<vetor[f]<<" ";
		}
		cout<<endl;
    }
}

int main(){
	int tam;
	cin>>tam;
	int v[tam];
	for(int i=0; i<tam; i++){
		cin>>v[i];
	}
	selection_sort(v, tam);

	return 0;
}
