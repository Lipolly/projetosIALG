#include <iostream>
#include <fstream>
using namespace std;

void quickSort(int v[], int esq, int dir) {
	int i, j, aux, pivo;
	i = esq+1;
	j = dir;
	pivo = v[(esq+dir)/2];
	while (i <= j) {
		while (v[i] < pivo) {
			i++;
		}
		while (v[j] > pivo) {
			j--;
		}
		if (i <= j) {
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			if(v[i] != v[j]){
				if(v[i] > v[j]){
					cout << v[i] << " " << v[j] << endl;
				}
				else{
					cout << v[j] << " " << v[i] << endl;					
				};
			};
			i++;
			j--;
		}
		else{
			cout << "-1" << " " << "-1" << endl;
		}
	}
	if (esq < j) {
		quickSort(v, esq, j);
	}
	if (i < dir) {
		quickSort(v, i, dir);
	}
}

int main(){
	int t, i, esq, dir;
	cin >> t;
	int v[t];
	for(i = 0; i < t; i++){
		cin >> v[i];
		if(i == 0){
			esq = i;
		};
		if(i == t-1){
			dir = i;
		}; 
	};
	quickSort(v, esq, dir);
	return 0;
}
