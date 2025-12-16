//inclui a biblioteca para entrada e saída de dados
#include <iostream>
using namespace std;

//funcao principal do programa
int main() {
    //cria um vetor para guardar 8 números inteiros
    int numeros[8];
    
    //mostra mensagem inicial
    cout << "Digite 8 numeros inteiros:" << endl;
    cout << endl; // Pula uma linha
    
    //repete 8 vezes para pegar os 8 números
    for (int i = 0; i < 8; i++) {
        //pede um número ao usuário
        cout << "Digite o " << (i+1) << "o numero: ";
        //lê o número e guarda no vetor
        cin >> numeros[i];
    }
    
    //assume que o primeiro numero é o maior
    int maior = numeros[0];
    //guarda a posição do maior (começa na posição 0)
    int posMaior = 0;
    
    //assume que o primeiro numero é o menor
    int menor = numeros[0];
    //guarda a posição do menor (começa na posição 0)
    int posMenor = 0;
    
    //percorre o vetor a partir da posicao
    for (int i = 1; i < 8; i++) {
        //se encontrar um número maior que o atual maior
        if (numeros[i] > maior) {
            //atualiza o maior valor
            maior = numeros[i];
            //atualiza a posicao do maior
            posMaior = i;
        }
        //se encontrar um numero menor que o atual menor
        if (numeros[i] < menor) {
            //atualiza o menor valor
            menor = numeros[i];
            //atualiza a posicao do menor
            posMenor = i;
        }
    }
    
    //quebra de linha
    cout << endl;
    
    //mostra o maior valor e sua posicao
    cout << "Maior valor: " << maior << " na posicao " << (posMaior+1) << endl;
    
    //mostra o menor valor e sua posicao
    cout << "Menor valor: " << menor << " na posicao " << (posMenor+1) << endl;
    
    //retorna 0 indicando que o programa terminou com sucesso
    return 0;
}