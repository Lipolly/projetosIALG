#include <iostream>
using namespace std;
int main() {
    int total, totalm, totalpos, totalneg;
    double media, porcpos, porcneg, numero; 

    totalpos = 0;
    totalneg = 0;
    totalm = 0;
    total = 0;
    
do {
	    cin >> numero;
	    totalm = (totalm + numero); 
		if (numero > 0) {
			totalpos = (totalpos + 1);
		}
		else if (numero < 0) {
			totalneg = (totalneg + 1);
		}
		total = (total + 1);
}
while (numero != 0);

total = (total - 1);
media = (totalm / total);
porcpos = (totalpos / total);
porcneg = (totalneg / total);

cout << media << endl << totalpos << endl << totalneg << endl << porcpos << endl << porcneg << endl;

    return 0;
}
