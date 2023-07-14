#include <iostream>
using namespace std;
int main() {
    int n, num, soma;
    float test, resto;
    
    cin >> num;   
    soma = 0;
    
for (n = 1; n <= num; n = n + 1) {
	test = num / n;
	resto = test * n;
	if (n == 1) {
		cout << n << '+';
		soma = soma + n;
	}
	else if (n == num) {
		cout << n << '=';
		soma = soma + n;
	}
	else if (resto >= num) {
		cout << n << '+';
		soma = soma + n;
	}
};
cout << soma << endl;
    return 0;
}
