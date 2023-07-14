#include <iostream>
using namespace std;

void buscabin(int v[],int max, int num) {
	int p, enc, comp;
	
	p = 0;
	enc = -1;
	comp = 0;
	
	while (p < max) {
		if (v[p] == num){
			enc = p;
			cout << p << " ";
			comp = comp + 1;
		}
		p++;
	};
	
	if (enc == -1) {
		cout << enc << endl << comp << endl;
	}
	else {
		cout << endl << comp << endl;
	};
	
}

int main () {
	int max, p;
	
	cin >> max;
	
	int v[max], num;
	
	for (p = 0; p < max; p++) {
		cin >> v[p];
	};
	
	cin >> num;
	
	buscabin(v, max, num);
	
	return 0;
}
