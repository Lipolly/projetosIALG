#include <iostream>
using namespace std;
int main() {
	
	int num, a , l, i;
	
    cin >> num;
    
    float m[num];
    
	i = 1;
    for (a = 0; a <= num; a++)
     {
		for (l = 0; l <= a; l++) {
		   m[l] = i;
		   i++;
		   if(l == num){
			   cout << m[l] << endl;
		   };
	   }
	}
return 0;
}
