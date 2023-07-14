#include <iostream>
using namespace std;

int som(int num1, int num2) {
    if (num2 == 0){
        return num1;
	}
	else{
		num1++;
		num2--;
		return som(num1, num2);
	};
}

int main() {
	int num1, s, num2;
	
	cin >> num1;
	cin >> num2;
	
	s = som(num1 , num2);
	
	cout << s << endl;
	return 0;
}
