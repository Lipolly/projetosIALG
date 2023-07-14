#include <iostream>
using namespace std;
int main() {
    int golpes;
    double thor, thanos;

    cin >> thanos;
    cin >> thor;
    golpes = 0;
    
do {
		thanos = (thanos - (thanos * 0.02));
	thor = (thor - (thor * 0.06));
	golpes = (golpes + 1);
 }
while (thanos <= thor);

cout << golpes << endl;

    return 0;
}
