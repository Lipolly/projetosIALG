#include <iostream>
using namespace std;

int x(int num) {

	if(num == 1){
		return 1;
	}
	else if(num == 2){
		return 2;		
	}
	else{
		return x(num - 1) + x(num - 2) + x(num - 1);	
	}; 
}

int y(int num) {
	
	if(num == 1){
		return 1;
	}
	else if(num == 2){
		return 3;
	}
	else{
		return x(num - 1) + x(num);
	}; 	
}

int main() {
	double num, rx, ry, raiz;
	
	cin >> num;
	if (num >= 1 && num <= 23){
		ry = y(num); 
		rx = x(num);
		raiz = (ry / rx);
		
		cout << raiz << endl;
	};
return 0;
}
