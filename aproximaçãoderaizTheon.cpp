//Nome: Ricardo Piero Lippoli Batista 
//Turma: 22B Matricula: 202010505 

#include <iostream> //Sem esta biblioteca o algaritmo não funciona.
#include <iomanip>  //Esta foi usada para permitir que o resultado tivesse uma maior precisão.

using namespace std; //Este permite o uso de "cin" e "cout".

int x(int num) { //Nesse subprograma coloquei adiantado o valor de x(num) quando o numero for 2 e 1
				 //pois além de facilitar o calculo para a maquina adiantava alguns valores, o mesmo foi feito
				 //no segundo subprograma y(num). Não adiantei outros, para evitar o uso de varios "else if" desnecessariamente
				 //tendo em vista que o valor maximo aceitavel seria 22.
	if(num == 1){
		return 1;
	}
	else if(num == 2){
		return 2;		
	}
	else{
		return (2 * x(num - 1)) + x(num - 2);	
	}; 
}
int y(int num) {
	if(num == 1){
		return 1;
	}
	else if(num == 2){
		return 3;
	}
	else{
		return x(num - 1) + x(num);
	}; 	
}
int main() {
	int num;
	double rx, ry, raiz; 	
	cin >> num;
	if (num >= 1 && num <= 22){ //Decidi manter os numeros possiveis igual ou entre 1 e 22
		                        //porquê um numero menor que um não faz sentido e maior que 25 
		                        //gera um resultado errado, contudo os numeros 23, 24 e 25 geram o mesmo valor.
		                        //A limitação até 22 foi feita pensando em evitar o gasto de processamento do computador.
		ry = y(num); 
		rx = x(num); //Ao invés de apenas colocar raiz = y(num / x(num)
					 //decidi deixar desta maneira porquê a raiz resultava em 1.
		raiz = (ry / rx);
		
		std::cout << std::setprecision(20) << raiz << '\n';
	}; //Se o numero dado for menor que 1 ou maior que 22 o programa fecha
	   //caso contrario o numero é direcionado aos subprogramas onde seram
	   //gerados outros dois numeros sendo eles rx e ry, no final o resultado desejado é a
	   //divisão desses dois numeros. 
	return 0;
}
