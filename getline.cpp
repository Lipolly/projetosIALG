// Este programa mostra como usar o getline para ler até o fim da linha, ao mesmo tempo
// que mostra que o operador de leitura (>>) deixa os caracteres brancos digitados após a
// informação lida. É preciso ter cuidado com esses caracteres que sobraram de operações de
// leitura anteriores quando se usa o getline.

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Digite seu número de matrícula e seu nome completo, separados por um espaço:\n";
    int matricula;
    string nome;
    cin >> matricula;
    // Neste ponto, o numero de matricula foi lido, mas o espaco entre ele o nome nao foi.
    // Nao queremos que o espaco fique no inicio do nome, entao vamos descartar esse espaco.
    cin >> ws; // decarta caracteres brancos
    getline(cin, nome);
    cout << "Seu número de matrícula é: " << matricula
         << "\nSeu nome é: \"" << nome << "\"\n";

    cout << "\nDigite seu número de matrícula e seu nome completo, separados por um fim de linha (ENTER):\n";
    cin >> matricula;
    cout << "Seu número de matrícula é: " << matricula;
    // Neste ponto, o numero de matricula foi lido, mas o fim de linha entre ele o nome nao foi.
    // Nao queremos que o espaco fique no inicio do nome, entao vamos descartar esse espaco.
    getline(cin, nome); // Melhor usar ws ou ignore para descartar o fim de linha, mas o getline
                        // le e descarta tudo ate o fim de linha. E' bom para mostrar o que
                        // acontece quando um getline encontra um fim de linha logo de inicio.
    cout << "\nEu li a sequência: \"" << nome
         << "\" mas sei que é só um fim de linha que eu pedi para você digitar.\n";
    getline(cin, nome); // continuando a ler depois do fim de linha
    cout << "\nSeu nome é: \"" << nome << "\"\n";
    return 0;
}
