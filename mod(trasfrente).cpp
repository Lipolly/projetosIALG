#include <iostream>
using namespace std;

void resp(int num) {
	int val;
	
	val = (num /11);
	val =(-((11 * val) - num));
	
	if (val != 0) {
		cout << "nao" << endl;
	}
	else {
		cout << "sim" << endl;
	};
}

int main() {
    int num;
    
    cin >> num;
    
    resp(num);
      
return 0;
}
