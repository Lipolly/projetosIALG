#include <iostream>

using namespace std;

void comp(int v[], int vcomparador, int t) {
	float resp, i;
	int p;
	
	i = 0;
	p = 0;
	while(vcomparador >= v[p]){
		p++;	
		i++;
	};
	
	
	resp = (i * 100) / t;
	cout << resp << endl;
}

void set(int v[], int p, int t) {
	int resp, hval, mval;
	
	resp = 0.7 * t;
	p = resp;
	
	hval = v[p] / 60;
	mval = v[p] - (hval * 60); 
	cout << hval << ":" << mval << endl;
}

int main () {
	int hor, min, p, val, hcomparador, mcomparador, vcomparador, t;
	int v[100];
	p = 0;
	while(hor > 0){
		cin >> hor;
		if(hor > 0){
			cin >> min;
			cin.ignore();
			val = hor * 60 + min;
			v[p] = val;
			p++;
		};
	};
	
	t = p;
	
	cin >> hcomparador;
	cin >> mcomparador;
	vcomparador = hcomparador * 60 + mcomparador;
	
	set(v, p = 0, t);
	comp(v, vcomparador, t);
	return 0;
}
