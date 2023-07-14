#include <iostream>

using namespace std;

void busca(int v[],int max, int nume, int p) {
	int para;
	
	para = 0;
	while (p < max and para == 0) {
		if (v[p] == nume){
			cout << nume << " " << p << endl;
			para = 1;
		}
		p++;
	};	
}

int busc(int v[], int num, int p, int max) {
	if (p < max) {
		if(num > v[p]) {
			num = v[p];
			p = p + 1;
			return busc(v, num, p, max);
		}
		else{
			p = p + 1;
			return busc(v, num, p, max);
		};
	}
	else {
		return num;
	};
}

int main () {
	int max, p, nume;
	cin >> max;
	int v[max], num;
	for (p = 0; p < max; p++) {
		cin >> v[p];
		num = v[p];
	};
	nume = busc(v, num, p = 0, max);
	busca(v, max, nume, p = 0);
	return 0;
}
