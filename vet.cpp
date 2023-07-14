#include <iostream>
using namespace std;
int main () {
	int i, j, l, c, t, tot, q;
	cin >> l;
	cin >> c;
	tot = l + c;
	char b[l], a[c], o[tot];
	
	for (i = 0; i < l; i++){
		cin >> b[i];
	};
	for (j = 0; j < c; j++){
		cin >> a[j];
	};
	
	o[0] = b[0];
	for(q = 0; q < tot+1; q++){
		if(o[q] == a[q]){
			o[q+1] = a[q];
		}
		else if(o[q] != b[q]){
			o[q+1] = b[q]; 
		};
	}; 
	for(t = 0; t < tot + 1; t++){
		cout << o[t] << " ";
	};		
	
	return 0;
}
