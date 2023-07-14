#include <iostream>
using namespace std;

int fat(int num, int k) {

	if(k == 0 || k == num){
		return 1;
	}
	else {
		return fat(num - 1, k - 1) + fat(num - 1, k);
	}

}

int main() {
	int num, ger, k;
	
	cin >> num;
	cin >> k;
	
	ger = fat(num , k);
	
	cout << ger << endl;
}
