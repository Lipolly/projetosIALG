#include <iostream>
using namespace std;

int f(int num,int pi) {
	int alt, delt;
	
    if (num > 0){
		alt = f(num - 1);
		return alt;
		return num - pi;
	}
	else {
		return 1;
	};
}

int ff(int alt) {
	int num, pib;
	m(num);
	num = alt;
	pib = m(num);
	return pib;
};

int m(int num, int pi) {
	int alt, delt;
	
    if (num < 0){
		alt = f(num - 1);
		return alt;
		return num - pi;
	}
	else {
		return 0;
	};
}

int main() {
	int num, mf, fm, x, pi;
	
	for(x = 0; x == 3; x++){
		cin >> num;
		ff(pi);
		mf = f(num , pi);
		cout << mf << endl;
	};
	
	for(x = 0; x == 3; x++){
		cin >> num;
		ff(pi);
		fm = m(num, pi);
		cout << fm << endl;
	};
}
