#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float pessoa, nau, comportnau, quant;
	
	cin >> pessoa;
	nau = 5;
	
	comportnau = (nau * 200); 
	
	if (pessoa > comportnau) {
		quant = ceil(((pessoa - comportnau)/80));
		cout << quant << endl;
	}
	else {
		cout << "0" << endl;
	}
return 0;
}
		
