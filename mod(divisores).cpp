#include <iostream>
using namespace std;

void divisores(int num) {
	int n, div, m, me;
	float test;
	
	me = 1;
	
	for(n = 1; n != num + 1; n = n + 1){
		div = (num / n);
		
		test =(-((n * div) - num));
		
		if (test == 0 and n != num) {
			cout << n << endl;
			m = n; 
			if (me != n and n < 4) {
				me = n;
			};
		}
		else if (test == 0 and n == num){
			cout << n << endl << me << " " << m << endl;
		};
	};
}

int main() {
    int num;

	cin >> num;
	
    divisores(num);
    
return 0;
}
