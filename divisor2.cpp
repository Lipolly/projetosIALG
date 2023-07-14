#include <iostream>
using namespace std;
int main() {
    int ingressos, cadeira, posicao;

    cin >> ingressos;
    cadeira = 0;
    
do {
	cin >> posicao;
	cadeira = (cadeira + 1);
	    if (posicao != cadeira and cadeira <= ingressos) {
			cin >> posicao;
		}
		else {
			cout << "0" << endl;
		}
}
while (posicao == cadeira);

cout << cadeira << endl;

    return 0;
}
