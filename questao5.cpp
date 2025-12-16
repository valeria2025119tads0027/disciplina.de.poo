//inclui a biblioteca para entrada e saida de dados
#include <iostream>
using namespace std;

//funcao principal do programa
int main() {
    //cria um vetor para guardar 5numeros inteiros
    int numeros[5];
    
    //mostra mensagem inicial
    cout << "Digite 5 numeros inteiros:" << endl;
    cout << endl; //pula uma linha
    
    //repete 5 vezes para pegar os 5 numeros
    for (int i = 0; i < 5; i++) {
        //pede um numero ao usuario
        cout << "Digite o " << (i+1) << "o numero: ";
        //le o numero e guarda no vetor
        cin >> numeros[i];
    }
    
    //pula uma linha
    cout << endl;
    
    //mostra todos os numeros digitados
    cout << "Os numeros que voce digitou foram:" << endl;
    //percorre cada posicao do vetor
    for (int i = 0; i < 5; i++) {
        //exibe o número
        cout << numeros[i] << endl;
    }
    
    //pula uma linha
    cout << endl;
    
    //cria variavel para guardar a soma (comeca com zero)
    int soma = 0;
    
    //percorre todo o vetor somando os numero
    for (int i = 0; i < 5; i++) {
        //adiciona cada numero na soma
        soma = soma + numeros[i];
    }
    
    //calcula a média dividindo a soma por 5
    float media = soma / 5.0;
    
    //mostra a soma total
    cout << "Soma total: " << soma << endl;
    
    //mostra a media dos valores
    cout << "Media aritmetica: " << media << endl;
    
    //retorna 0 indicando que o programa terminou com sucesso
    return 0;
}