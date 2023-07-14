#include <iostream>
using namespace std;

void fi(int num) {
	int i, x, y, n; 
	
	x = 0;
	y = 1;
	i = 1;
	
	for (n = 0; n != num; n = n + 1){
		cout << i << endl;
		i = x + y;
		x = y;
		y = i;
	};
}

int main() {
    int num;

	cin >> num;
	
    fi(num);
    
return 0;
}
