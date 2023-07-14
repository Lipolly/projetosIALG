#include <iostream>
#include <fstream>
using namespace std;

int recur(float n, int ciclo, int i, int v[]){
	float rest, pivo;
	int val, som;
	pivo = n;
	val = n / 2;
	som = val * 2;
	rest = pivo - som;
	
	v[i] = pivo;
	i++;
	
	if(pivo <= 1){
		return ciclo;
	}
	else{
		if(rest == 0){
			n = (pivo / 2);
			ciclo++;
			return recur(n, ciclo, i, v);
		}
		else{
			n = (3*pivo) + 1;
			ciclo++;
			return recur(n, ciclo, i, v);
		};
	};
}

void gravar(int v[], int c){
	int i;
	ofstream arquivoEscrita("ciclo.txt");
	for(i = 0; i <= c; i++){
		arquivoEscrita << v[i] << " ";
	};
}

int main(){
	int n, ciclo, c, i;
	cin >> n;
	ciclo = 0;
	i = 0;
	int v[1000];
	c = recur(n, ciclo, i, v);
	cout << c+1;
	
	gravar(v, c);
	return 0;
}
