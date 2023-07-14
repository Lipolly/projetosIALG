#include <iostream>
using namespace std;
int main( )
{
int totalsocos, energrest;
float aphp, lutt;

cin >> aphp;
cin >> lutt;

totalsocos = (((lutt * 60)/5)*10);
energrest = (aphp - totalsocos * 12);
 
cout << totalsocos << endl << energrest << endl;
return 0;
}

