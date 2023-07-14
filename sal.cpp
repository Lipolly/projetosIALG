#include <iostream>
using namespace std;

int main()
{
float salar, horas, total, imp, horaT, salarB;
cin >> salar;
cin >> horas;
horaT = (0.05 * salar);
salarB = (horas * horaT);
imp = (0.23 * salarB);
total = (salarB - imp);
cout << total << endl;
    return 0;
}
