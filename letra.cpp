#include <iostream>
using namespace std;
int main( )
{
char letra;

cin >> letra;
if ('A' <= letra && letra <= 'Z') {
	cout << "MAIUSCULA" << endl;
} else if ('a' <= letra && letra <= 'z') {
	cout << "MINUSCULA" << endl;
}
return 0;
}
