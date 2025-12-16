#include <iostream> //inclui a biblioteca para entrada e saida de dado
using namespace std;

int main() {
    int numeros[8]; //cria um vetor para guardar 8 números inteiros
    
    cout << "Digite 8 numeros inteiros:" << endl; //mostra mensagem inicial
    cout << endl; //quebra de linha
    
    for (int i = 0; i < 8; i++) { //repete 8 vezes para pegar os 8 números
        cout << "Digite o " << (i+1) << "o numero: "; //pede um número ao usuário
        cin >> numeros[i]; //lê o número e guarda no vetor 
    }
    
    int maior = numeros[0]; //assume que o primeiro numero é o maior
    int posMaior = 0; //guarda a posição do maior (começa na posição 0)
    
    int menor = numeros[0]; //assume que o primeiro numero é o menor
    int posMenor = 0; //guarda a posição do menor (começa na posição 0)
    
    for (int i = 1; i < 8; i++) { //percorre o vetor a partir da posicao
        if (numeros[i] > maior) { //se encontrar um número maior que o atual maio
            maior = numeros[i]; //atualiza o maior valor
            posMaior = i; //atualiza a posicao do maior
        }
        if (numeros[i] < menor) { //se encontrar um numero menor que o atual menor
            menor = numeros[i]; //atualiza o menor valor
            posMenor = i; //atualiza a posicao do menor
        }
    }
    
    cout << endl;
    
    cout << "Maior valor: " << maior << " na posicao " << (posMaior+1) << endl; //mostra o maior valor e sua posicao
    
    cout << "Menor valor: " << menor << " na posicao " << (posMenor+1) << endl; //mostra o menor valor e sua posicao
    
    return 0; //retorna 0 indicando que o programa finalzou com sucesso
}