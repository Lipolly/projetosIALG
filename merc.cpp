#include <iostream>

using namespace std;

void vtotal(int v[], int q[], int p){	
	int total;
	p = 0;
	while(p != 10){
		total = q[p] * v[p];
		cout << q[p] << " " << v[p] << " " << total << endl;
		p++;
	};
}

void salario(int v[], int q[], int p){
	int tvenda, venda, acr, sala;
	p = 0;
	tvenda = 0;
	while(p != 10){
		venda = q[p] * v[p];
		tvenda = tvenda + venda;
		p++;
	};
	acr = 0.05 * tvenda;
	sala = acr + 900;
	cout << tvenda << " " << sala << endl;
}

void mvendido(int q[], int p, int v[]){
	int i;
	
	i = 0;
	for(p = 0; p != 10; p++){
		if(q[i] < q[p]){
			i = p;
		}
	};
	
	cout << v[i] << " " << i << endl;
}

int main () {
	int valu, quant, p;
	int v[10], q[10];
	p = 0;
	
	while(p != 10){
		cin >> valu;
		v[p] = valu;
		cin >> quant;
		q[p] = quant;
		cin.ignore();
		p++;
	};
	
	vtotal(v, q, p = 0);
	salario(v, q, p = 0);
	mvendido(q, p = 10, v);
	return 0;
}
