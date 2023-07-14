#include <iostream>

using namespace std;

void ordem(int v[], int tot){
    float valorPivo;
    int j;	
    for(int i = 1; i < tot; i++){    		
		valorPivo = v[i];
		j = i - 1;
		while((j >= 0) and (valorPivo < v[j])){
			v[j+1] = v[j];	
			j--;
		};
		v[j+1] = valorPivo;				
    };
}

int main(){
	int i, n;
	
	int v[8];
	n = 0;
	for(i = 0; i < 8; i++){
		cin >> v[i];
		n++;
		ordem(v, n);
		for(int x = n-1; x >= 0; x--){
			cout << v[x] << " ";
		};
		cout << endl;
	};
	return 0;
}
