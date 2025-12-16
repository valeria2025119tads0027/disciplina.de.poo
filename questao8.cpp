#include <iostream> //inclui a biblioteca para entrada e saída de dados
#include <string> //inclui a bibliotec para trabalhar com textos (strings)
using namespace std;

int main() {
    string nomes[6]; //cria um vetor para guardar 6 nomes
    
    cout << "Digite 6 nomes:" << endl; //mostra mensagem inicial
    cout << endl; //quebra de linha
    
    for (int i = 0; i < 6; i++) { //repete 6 vezes pra pegar os 6 nome
        cout << "Digite o " << (i+1) << "o nome: "; //pede um nome ao usuário
        cin >> nomes[i]; //lê o nome e guarda no vetor
    }
    
    cout << endl;
    
    string nomeBusca; //pede o nome que o usuário quer buscar
    cout << "Digite um nome para buscar: ";
    cin >> nomeBusca; //lê o nome a ser buscado
    
    cout << endl;
    
    bool encontrou = false; //variavel para guardar se encontrou ou nao
    
    for (int i = 0; i < 6; i++) { //percorre todo o vetor procurando o nome
        if (nomes[i] == nomeBusca) { //se o nome na posição i for igual ao nome buscado
            encontrou = true; //marca que encontrou o nome
            break; //para de procurar
        }
    }
    
    if (encontrou) { //se encontrou o nome
        cout << "O nome " << nomeBusca << " EXISTE no vetor!" << endl;  //mostra que o nome está no vetor
    }
    else {
        cout << "O nome " << nomeBusca << " NAO existe no vetor." << endl; //informa que o nome não esta no vetor
    }
    
    return 0; //retorna 0 indicando que o programa se encerrou com sucesso
}