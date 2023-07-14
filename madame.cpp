#include <iostream>
using namespace std;
int main() {
    int n, num, numx, soma;
    
    cin >> num;   
    soma = num;
    
    
for (n = num; n >= 1; n = n / 2) {
	numx = n /2;
	if (numx == 1){
		cout << '1' << '+';
	}
	else if (numx != 0){
	cout << numx << '+';
}

	soma = soma + numx;
	};
cout << num << '=' << soma << endl;
    return 0;
}
