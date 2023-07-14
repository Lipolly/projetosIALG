#include <iostream>
using namespace std;
int main() {
    int num, m, nume;
    double e, i, valort;

    cin >> num;
    valort = 1;
    e = 0;
    nume = num;
    
while (nume > 0) {
	nume = nume - 1;
	valort = 1;
	for (m = nume; m >= 1; m = m - 1) {
		valort = valort * m;
		};
		i = (1 / valort);
        e = e + i;
        };
 
cout << e << endl;

    return 0;
}
