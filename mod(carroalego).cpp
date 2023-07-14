#include <iostream>
using namespace std;

void temp(int numih,int numim,int numfh,int numfm){
	int n, zap;
	n = 0;
	while(numim != numfm || numih != numfh){
		numim = numim + 1;
		if (numim == 60){
			numih = numih + 1;
			numim = numim - numim;
		};
		if(numih == 24){
			numih = numih - numih;
		};
		n = n + 1;
	};
	zap = val(n);
}
void val(int n){
	int dif;
	float pag;
	
	if(n >= 55){
		if(n <= 65){
			cout << 0.0 << endl;
		};
	}
	else if(n <= 55){
		dif = 55 - n;
		pag = dif * 0.1;
		return pag;
	}
	else if(n >= 65){
		dif = n - 65;
		pag = dif * 0.1;
		return pag;
	};
}	

int main() {
	int numih, numim, numfh, numfm, xim;
	float zip, n;
	string nome;
	
	do{
		getline(cin, nome);
		if(nome != "fim"){
			cin >> numih;
			cout << numih << endl;
			
			cin >> numim;
			cout << numim << endl;
			
			cin >> numfh;
			cout << numfh << endl;
			
			cin >> numfm;
			cout << numfm << endl;
			
			cin.ignore();
		};
	}while(nome != "fim");
	
	xim = temp(numih, numim, numfh, numfm);
	zip = val(n);
	
	cout << zip << endl;
}
