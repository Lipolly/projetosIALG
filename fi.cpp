#include <iostream>
#include <fstream>
using namespace std;

double recur(double n, double v[], int l){
	double x, para;
	if(n == 1){
		x = 1;
		return x;	
	}
	else if(n > 1){
		para = recur(n - 1, v, l);
		v[l] = para;
		l--;
		x = 1 + (1 / recur(n - 1, v, l));
		return x;
	};
}

void gravar(double v[], double vv){
	int i;
	ofstream arquivoEscrita("phi.txt");
	for(i = 0; i < vv; i++){
		arquivoEscrita << v[i] << endl;
	};
}

int main(){
	double n, phi;
	int vv, l;
	cin >> n;
	
	vv = n;
	double v[vv];
	l = vv-2;
	phi = recur(n, v, l);
	cout << phi;
	v[vv-1] = phi;
	gravar(v, vv);
	return 0;
}
