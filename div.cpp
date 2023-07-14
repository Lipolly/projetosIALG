#include <iostream>
using namespace std;

int main()
{
string cor1, cor2;
int alg1, resp;
float rest;

cin >> cor1;
cin >> cor2;
cin >> alg1;

resp = (alg1 / 11);
rest = (-((11 * resp)-alg1));

if (rest != 0) {
	cout << cor2 << endl;
}
else {
	cout << cor1 << endl;
}
    return 0;
}
