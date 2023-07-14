#include <iostream>
using namespace std;

int main()
{
	int pais, cod;
	float peso, pesog, precob, imp, preco;
cin >> cod;
cin >> peso;
cin >> pais; 

if (cod >= 1 and cod <= 4) {
	if (pais == 1) {
		pesog = (peso * 1000);
		precob = (10 * pesog);
		imp = (precob * 0);
		preco = (precob + imp);
	    cout << pesog << endl << precob << endl << imp << endl << preco << endl;
	}
	else if (pais == 2) {
		pesog = (peso * 1000);
		precob = (10 * pesog);
		imp = (precob * 0.15);
		preco = (precob + imp);
	    cout << pesog << endl << precob << endl << imp << endl << preco << endl;
	}	
	else if (pais == 3) {
		pesog = (peso * 1000);
		precob = (10 * pesog);
		imp = (precob * 0.25);
		preco = (precob + imp);
	    cout << pesog << endl << precob << endl << imp << endl << preco << endl;
	}	
}
else if (cod >= 5 and cod <= 7) {
	if (pais == 1) {
		pesog = (peso * 1000);
		precob = (25 * pesog);
		imp = (precob * 0);
		preco = (precob + imp);
	    cout << pesog << endl << precob << endl << imp << endl << preco << endl;
	}
	else if (pais == 2) {
		pesog = (peso * 1000);
		precob = (25 * pesog);
		imp = (precob * 0.15);
		preco = (precob + imp);
	    cout << pesog << endl << precob << endl << imp << endl << preco << endl;
	}	
	else if (pais == 3) {
		pesog = (peso * 1000);
		precob = (25 * pesog);
		imp = (precob * 0.25);
		preco = (precob + imp);
	    cout << pesog << endl << precob << endl << imp << endl << preco << endl;
	}
}	
else if (cod >= 8 and cod <= 10) {
	if (pais == 1) {
		pesog = (peso * 1000);
		precob = (35 * pesog);
		imp = (precob * 0);
		preco = (precob + imp);
	    cout << pesog << endl << precob << endl << imp << endl << preco << endl;
	}
	else if (pais == 2) {
		pesog = (peso * 1000);
		precob = (35 * pesog);
		imp = (precob * 0.15);
		preco = (precob + imp);
	    cout << pesog << endl << precob << endl << imp << endl << preco << endl;
	}	
	else if (pais == 3) {
		pesog = (peso * 1000);
		precob = (35 * pesog);
		imp = (precob * 0.25);
		preco = (precob + imp);
	    cout << pesog << endl << precob << endl << imp << endl << preco << endl;
	}
}
    return 0;
}
