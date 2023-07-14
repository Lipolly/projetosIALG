#include<iostream>
using namespace std;
struct memes{
	int num;
	string nome;
	string assunto;
	string site;
};

void ordem(memes *meme, int aval){
	int i, j, aux, posMenor;
	string auxt;
	
	for (i = 0; i < aval-1; i++) {
		posMenor = i;
		for (j = i + 1; j < aval; j++) {
			if (meme[j].num < meme[posMenor].num){
				posMenor = j;
			};
		};
		auxt = meme[i].nome;
		meme[i].nome = meme[posMenor].nome;
		meme[posMenor].nome = auxt;
		
		aux = meme[i].num;
		meme[i].num = meme[posMenor].num;
		meme[posMenor].num = aux;
		
		auxt = meme[i].assunto;
		meme[i].assunto = meme[posMenor].assunto;
		meme[posMenor].assunto = auxt;
		
		auxt = meme[i].site;
		meme[i].site = meme[posMenor].site;
		meme[posMenor].site = auxt;								
	};
}

void leitura(memes *meme, int aval){
	for(int i = 0; i < aval; i++){
		cin >> meme[i].num;
		cin >> meme[i].nome;
		cin >> meme[i].assunto;
		cin >> meme[i].site;
	};
};

void busca(memes *meme, int aval, string para){
	int r = false;
	
	for(int i = 0; i < aval; i++){
		if(meme[i].site == para){
			cout << meme[i].num << " " << meme[i].nome << " " << meme[i].assunto << " " << meme[i].site << endl;
			r = true;
		};
	};
	if(r == false){
		cout << "Inexistente" << endl;
	};
}

int main(){
	int aval;
	string para;
	cin >> aval;
	memes meme[aval];
	leitura(meme, aval);
	ordem(meme, aval);
	cin >> para;
	busca(meme, aval, para);
	return 0;
}
