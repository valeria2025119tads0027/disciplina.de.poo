#include <iostream> //inclui a biblioteca para entrada e saida de dados

using namespace std;

int main() {  //funcao principal do programa
    int numeros[5]; //cria um vetor para guardar 5 numeros inteiros
    
    cout << "Digite 5 numeros inteiros:" << endl; //mostra mensagem inicial
    cout << endl; //quebra de linha
    
    for (int i = 0; i < 5; i++) {  //repete 5 vezes para pegar os 5 números
        cout << "Digite o " << (i+1) << "o numero: "; //pede um numero ao usuario
        cin >> numeros[i];  //le o numero e guarda no vetor
    }
    
    cout << endl;
    
    cout << "Os numeros que voce digitou foram:" << endl; //mostra todos os números digitados
    for (int i = 0; i < 5; i++) {  //percorre cada posicao do vetor
        cout << numeros[i] << endl; //exibe o numero
    }
    
    return 0; //retorna 0 indicando que o programa terminou com sucesso
}