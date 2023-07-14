#include <iostream>
using namespace std;
int main() {
    int ingresso, chegada, conte, num;
    
    cin >> ingresso;   
    conte = 0;
    num = 0;

    do {
		cin >> chegada;
		conte = conte + 1;
		if (num == 0) {
			if (chegada == conte){
				num = chegada;
				}
			};
			}while(conte != ingresso);
		cout << num << endl;
		return 0;
		}
