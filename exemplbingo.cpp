#include <iostream>
using namespace std;
int main(){
    int L, C;
    float M[L][C];
    
    L = 5;
    C = 5;
    for (int i = 0; i < L; i++)
   	 for (int j = 0; j < C; j++)
   		 cin >> M[i][j];
    for (int i = 0; i < L; i++)
   	 cout << M[i][i] << endl;
    return 0;
}
