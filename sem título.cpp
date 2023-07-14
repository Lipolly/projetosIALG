#include <fstream>
#include <iostream>
using namespace std;
int main(){
  ifstream arquivo("dados.txt");
  string dados;
  if (arquivo) {
    while ( arquivo >> dados )
      cout << dados << endl;
    arquivo.close();
  }
  return 0;
}
