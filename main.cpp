#include <iostream>
 
using namespace std;


int main(){
	int n, par;
	char pos = 'N';
	cin>> n;
	char comando[n];
	
	par = 0;
	for(int i = 0; i < n; i++){
		cin >> comando[i];
	}
	
	for(int x = 0; x < n; x++){
		if(comando[x] == 'D'){
			if(pos == 'N'){	
				par = 1;
			}
			else if(pos == 'L'){
				par = 2;
			}
			else if(pos == 'S'){
				par = 3;
			}
			else if(pos == 'O'){
				par = 0;
			};
			if(par == 0){
				pos = 'N';
			}
			else if(par == 1){
				pos = 'L';
			}
			else if(par == 2){
				pos = 'S';
			}
			else if(par == 3){
				pos = 'O';
			};
		}
		else if(comando[x] == 'E'){
			if(pos == 'N'){	
				par = 1;
			}
			else if(pos == 'L'){
				par = 2;
			}
			else if(pos == 'S'){
				par = 3;
			}
			else if(pos == 'O'){
				par = 0;
			};
			if(par == 2){
				pos = 'N';
			}
			else if(par == 1){
				pos = 'O';
			}
			else if(par == 0){
				pos = 'S';
			}
			else if(par == 3){
				pos = 'L';
			};
		};
	};
				 
	cout << pos;


	return 0;
}
