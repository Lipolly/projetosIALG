#include <iostream>
using namespace std;
int main() {
    int num1, num2, soma, inicio;

    cin >> num1;
    cin >> num2;
    inicio = num1;
    
if (num2 != 0) {  
    cout << num1 << endl;
do {
	if (num2 == 1) {
		break;
	}
	else {
	if (num2 > 0) {
		soma =  num1 + inicio;
		cout << soma << endl;
		num1 = soma;
		num2 = num2 - 1;
	}
	else {
		soma = 0;
		cout << soma << endl;
	};
};}while (num2 != 0);
}
else {
	soma = num1 - num1;
	cout << soma << endl;
};
 
    return 0;
}
