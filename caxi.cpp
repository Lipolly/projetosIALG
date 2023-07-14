#include <iostream>
using namespace std;
int main () {
	int ti, ii, li, fi;
	li = 1;
	char bo[li];
	ti = 1;
	for(ii = 0; ii < ti; ii++){
		cin >> bo[ii];
		ti++;
		li++;
	};
	
	for(fi = 0; fi < ti; ti++){
		cout << bo[fi];
	};

	return 0;
}
