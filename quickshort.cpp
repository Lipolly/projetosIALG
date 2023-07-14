#include <iostream>

using namespace std;

void quickSort(int v[], int esq, int dir) {
	int i, j, aux, pivo;
	i = esq;
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
			i++;
			j--;
		}
					if((v[i] == v[i-1]) or (v[j] == v[j-1])){
				cout << -1 << " " << -1 << endl;
			}
			if(v[j] != v[i]){	
				cout << v[j] << " " << v[i] << endl;
			};
	}
	
	if (esq < j) {
		quickSort(v, esq, j);
	}
	if (i < dir) {
		quickSort(v, i, dir);
	}
}

int main(){
	int i, aval;
	cin >> aval;
	
	int v[aval];
	
	for(i = 0; i < aval; i++){
		cin >> v[i];
	};
	
	quickSort(v, 0, aval);
	return 0;
}
