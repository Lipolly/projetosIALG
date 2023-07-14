#include <iostream>
using namespace std;
int main(){
	int tam, pivo = 0, i, ii;
	char posicao = 'N';
	cin>> tam;
	char v[tam];
	for(i = 0; i < tam; i++){
		cin >> v[i];
	};
	for(ii = 0; ii < tam; ii++){
		if(v[ii] == 'D'){
			if(posicao == 'N'){	
				pivo = 0;
			}
			else if(posicao == 'L'){
				pivo = 1;
			}
			else if(posicao == 'S'){
				pivo = 2;
			}
			else if(posicao == 'O'){
				pivo = 3;
			};
			if(pivo == 3){
				posicao = 'N';
			}
			else if(pivo == 0){
				posicao = 'L';
			}
			else if(pivo == 1){
				posicao = 'S';
			}
			else if(pivo == 2){
				posicao = 'O';
			};
		}
		else if(v[ii] == 'E'){
			if(posicao == 'N'){	
				pivo = 0;
			}
			else if(posicao == 'L'){
				pivo = 1;
			}
			else if(posicao == 'S'){
				pivo = 2;
			}
			else if(posicao == 'O'){
				pivo = 3;
			};
			if(pivo == 1){
				posicao = 'N';
			}
			else if(pivo == 0){
				posicao = 'O';
			}
			else if(pivo == 3){
				posicao = 'S';
			}
			else if(pivo == 2){
				posicao = 'L';
			};
		};
	};
	cout << posicao << endl;
	return 0;
}
