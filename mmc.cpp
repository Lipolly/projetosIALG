#include <iostream>
using namespace std;
int main()
{
    int resto, num1, num2, inicio , inicio2, mmc;
    cin >> num1;
    cin >> num2;
    inicio = num1;
    inicio2 = num2;

    do {
        resto = inicio % inicio2;
        inicio = inicio2;
        inicio2 = resto;
    } while (resto != 0);
    
    mmc = ((num1 * num2) / inicio);
    
    cout << mmc << endl;

return 0;
}
