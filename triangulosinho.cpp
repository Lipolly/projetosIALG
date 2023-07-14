#include <iostream>
using namespace std;
int main() {
	
	int num, a , l, i;
	
    cin >> num;
	i = 1;
    for (a = 1; a <= num; a = a + 1){
		for (l = 1; l <= a; l = l + 1) {
			cout << i << "--";
			i++;
		};
	putchar('\n');
	};
return 0;
}
