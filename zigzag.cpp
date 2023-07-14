#include <iostream>
using namespace std;
int main () {
	int i, j, ord, l, c;
	cin >> l;
	cin >> c;
	int b[l][c];
	for (int i = 0; i < l; i++){
		for (int j = 0; j < c; j++){
			cin >> b[i][j];
		};
	};
	for(i = 0; i < l; i++){
		if(i %2 != 0){
			for(j = 0; j < c; j++){
				ord = b[i][j];
				cout << ord << endl;
			};			
		}
		else{
			for(j = c - 1; j != -1; j--){
				ord = b[i][j];
				cout << ord << endl;
			};
		};			
	};
	return 0;
}
