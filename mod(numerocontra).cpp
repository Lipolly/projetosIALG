#include <iostream>
using namespace std;

void som(int num,int cont) {
    
    if (num == 0){
		cout << cont << endl;
	}
	else {
		num = num / 10;
		cont = cont + 1;
		return som(num, cont);
	};
}

int main() {
	int num, cont;
	
	cin >> num;
	cont = 0;
	
	som(num, cont);
}
