#include <iostream> //inclui a biblioteca para entrada e saida de dados
using namespace std;

int main() { //funcao principal
    int numeros[5]; //cria um vetor para guardar 5numeros inteiros
    
    cout << "Digite 5 numeros inteiros:" << endl; //mostra mensagem inicial
    cout << endl; //pula uma linha
    
    for (int i = 0; i < 5; i++) { //repete 5 vezes para pegar os 5 numeros
        cout << "Digite o " << (i+1) << "o numero: "; //pede um numero ao usuario
        cin >> numeros[i]; //le o numero e guarda no vetor
    }
    
    cout << endl;
    
    cout << "Os numeros que voce digitou foram:" << endl; //mostra todos os numeros digitados
    for (int i = 0; i < 5; i++) { //percorre cada posicao do vetor
        cout << numeros[i] << endl; //exibe o número
    }
    
    cout << endl;
    
    int soma = 0; //cria variavel para guardar a soma, comeca com zero
    
    for (int i = 0; i < 5; i++) { //percorre todo o vetor somando os numero
        soma = soma + numeros[i]; //adiciona cada numero na soma
    }
    
    float media = soma / 5.0; //calcula a média dividindo a soma por 5
    
    cout << "Soma total: " << soma << endl; //mostra a soma total
    
    cout << "Media aritmetica: " << media << endl; //mostra a media dos valores
    
    return 0; //retorna 0 indicando que o programa terminou com sucesso
}