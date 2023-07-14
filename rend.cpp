#include <iostream>
using namespace std;

int main()
{
int cor1, cor2, alg1, alg2, alg3, alg4, alg5, alg6;
cin >> cor1;
cin >> cor2;
cin >> alg1;
cin >> alg2;
cin >> alg3;
cin >> alg4;
cin >> alg5;
cin >> alg6;

if (alg1 <> alg6) {
	cout << cor2 << endl;
}
else if (alg2 <> alg5) {
	cout << cor2 << endl;
}
else if (alg3 <> alg4) {
			cout << cor2 << endl;
}
else {
	cout << cor1 << endl;
}
    return 0;
}
