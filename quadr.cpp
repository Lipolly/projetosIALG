#include <iostream>
#include <cmath>
using namespace std;
int main( )
{
int x, y; 
float res;

cin >> x;
cin >> y;

if (x > 0 and y > 0) 
{
	res = (x/y);
	cout << res <<  endl;
}
else if (x < 0 and y > 0) 
{
	res = (x * y);
	cout << res << endl;
}
else if (x < 0 and y < 0)
{
	res = (x + y);
	cout << res << endl;
}
else if (x > 0 and y < 0)
{
	res = pow(x,y);
	cout << res << endl;
}
return 0;
}
