#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num, numm, numn;
	float nota, notam, notan;

    cin >> num;
    cin >> nota;
    notam = nota;
    numm = num;
    numn = num;
    notan = nota;
    
	while(num != 0) {
		cin >> num;
		cin >> nota;
		
		if (nota > notam) {
			notam = nota;
			numm = num;
		}
		else {
			if (nota > notan || nota == notam) {
				notan = nota;
				numn = num;
			};
		};
	};	

		cout << numm << " " << notam << endl << numn << " " << notan << endl;
	
return 0;
}
