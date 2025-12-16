//inclui a biblioteca para entrada e saída de dados
#include <iostream>
using namespace std;

//funcao principal do programa
int main() {
    //cria um vetor para guardar 10 numeros inteiros
    int numeros[10];
    
    //mostra mensagem inicial
    cout << "Digite 10 numeros inteiros:" << endl;
    cout << endl; // Pula uma linha
    
    //repete 10 vezes para pegar os 10 números
    for (int i = 0; i < 10; i++) {
        //pede um número ao usuároi
        cout << "Digite o " << (i+1) << "o numero: ";
        //lê o número e guarda no vetor
        cin >> numeros[i];
    }
    
    //quebra de linha
    cout << endl;
    
    //pede o número X que o usuário quer buscar
    int x;
    cout << "Digite um numero para buscar: ";
    //lê o número X
    cin >> x;
    
    //quebra de linha
    cout << endl;
    
    //variável para guardar se encontrou ou não (começa como falso)
    bool encontrou = false;
    //variável para guardar a posicao onde encontrou
    int posicao = -1;
    
    //percorre todo o vetor procurando o número X
    for (int i = 0; i < 10; i++) {
        //sse o número na posicao i for igual a X
        if (numeros[i] == x) {
            //marca que encontrou o número
            encontrou = true;
            //guarda a posição onde encontrou
            posicao = i;
            //para de procurar (encontrou a primeira ocorrência)
            break;
        }
    }
    
    //se encontrou o numero X
    if (encontrou) {
        //montra que o número está no vetor
        cout << "O numero " << x << " ESTA no vetor!" << endl;
        //mostra a posicao
        cout << "Primeira aparicao na posicao: " << (posicao+1) << endl;
    }
    //se não encontrou o número X
    else {
        //informa que o numero não esta no vetor
        cout << "O numero " << x << " NAO esta no vetor." << endl;
    }
    
    //retorna 0 indicando que o programa se encerrou com sucesso
    return 0;
}