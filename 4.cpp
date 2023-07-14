#include <iostream>
using namespace std;
void medida(int vetor[], int anoa, int aval){
	int resultante[aval], pivo, j, y, x;
	aval += 1;
	for(y = 0; y < aval; y++){
		if(y == 0){
			resultante[y] = anoa;
		}
		else if(y >= 1){
			resultante[y] = resultante[(y - 1)] + vetor[y - 1];
		}
	}
	for(x = 1; x < aval; x++){
		pivo = resultante[x];
		j = x-1;
		while((j >= 0) and (pivo > resultante[j])){
			resultante[j+1] = resultante[j];
			j--;
		}
		resultante[j+1] = pivo;
	}
	cout << resultante[0] << endl << resultante[1] << endl;
}
int main(){ 
	int anoi, anoa, aval, x;
	cin >> anoi;
	cin >> anoa;
	cin >> aval;
	int vetor[aval];
	for(x = 0; x < aval; x++){
		cin >> vetor[x];
	}
	medida(vetor, anoa, aval);
	return 0;
}
