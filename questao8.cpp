//inclui a biblioteca para entrada e saída de dados
#include <iostream>
//inclui a bibliotec para trabalhar com textos (strings)
#include <string>
using namespace std;

//funcao principal do programa
int main() {
    //cria um vetor para guardar 6 nomes
    string nomes[6];
    
    //mostra mensagem inicial
    cout << "Digite 6 nomes:" << endl;
    cout << endl; // Pula uma linha
    
    //repete 6 vezes pra pegar os 6 nomes
    for (int i = 0; i < 6; i++) {
        //pede um nome ao usuário
        cout << "Digite o " << (i+1) << "o nome: ";
        //lê o nome e guarda no vetor
        cin >> nomes[i];
    }
    
    //quebra de linha
    cout << endl;
    
    //pede o nome que o usuário quer buscar
    string nomeBusca;
    cout << "Digite um nome para buscar: ";
    //lê o nome a ser buscado
    cin >> nomeBusca;
    
    //quebra de linha
    cout << endl;
    
    //variavel para guardar se encontrou ou nao
    bool encontrou = false;
    
    //percorre todo o vetor procurando o nome
    for (int i = 0; i < 6; i++) {
        //se o nome na posição i for igual ao nome buscado
        if (nomes[i] == nomeBusca) {
            //marca que encontrou o nome
            encontrou = true;
            //para de procurar
            break;
        }
    }
    
    //se encontrou o nome
    if (encontrou) {
        //mostra que o nome está no vetor
        cout << "O nome " << nomeBusca << " EXISTE no vetor!" << endl;
    }
    //se nao encontrou o nome
    else {
        //informa que o nome não esta no vetor
        cout << "O nome " << nomeBusca << " NAO existe no vetor." << endl;
    }
    
    //retorna 0 indicando que o programa encerrou com sucesso
    return 0;
}