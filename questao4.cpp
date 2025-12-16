//inclui a biblioteca para entrada e saida de dados
#include <iostream>
using namespace std;

//funcao principal do programa
int main() {
    //cria um vetor para guardar 5 numeros inteiros
    int numeros[5];
    
    //mostra mensagem inicial
    cout << "Digite 5 numeros inteiros:" << endl;
    cout << endl; //pula uma linha
    
    //repete 5 vezes para pegar os 5 números
    for (int i = 0; i < 5; i++) {
        //pede um numero ao usuario
        cout << "Digite o " << (i+1) << "o numero: ";
        //le o numero e guarda no vetor
        cin >> numeros[i];
    }
    
    //pula uma linha
    cout << endl;
    
    //mostra todos os números digitados
    cout << "Os numeros que voce digitou foram:" << endl;
    //percorre cada posicao do vetor
    for (int i = 0; i < 5; i++) {
        //exibe o numero
        cout << numeros[i] << endl;
    }
    
    //retorna 0 indicando que o programa terminou com sucesso
    return 0;
}