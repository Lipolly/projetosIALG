#include <iostream>
using namespace std;
int main( )
{
float mat, nat, lin, red, hum, med;

cin >> mat;
cin >> nat;
cin >> lin;
cin >> red;
cin >> hum;
if (red <= 199) 
{
	cout << "-1";
}
else {
med = (mat * 3 + nat * 2 + lin * 2 + red * 2 + hum)/10;
cout << med << endl;
}
return 0;
}
