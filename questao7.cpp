#include <iostream> //inclui a biblioteca para entrada e saída de dados
using namespace std;

int main() {
    int numeros[10]; //cria um vetor para guardar 10 numeros inteiros
    
    cout << "Digite 10 numeros inteiros:" << endl; //mostra mensagem inicial
    cout << endl; //quebra de lina
    
    for (int i = 0; i < 10; i++) { //repete 10 vezes para pegar os 10 números
        cout << "Digite o " << (i+1) << "o numero: "; //pede um número ao usuároi
        cin >> numeros[i]; //lê o número e guarda no vetor
    }
    
    cout << endl;
    
    int x; //pede o número X que o usuário quer buscar
    cout << "Digite um numero para buscar: ";
    cin >> x; //lê o número X
    
    cout << endl;
    
    bool encontrou = false; //variável para guardar se encontrou ou não (começa como falso)
    int posicao = -1; //variável para guardar a posicao onde encontrou
    
    for (int i = 0; i < 10; i++) { //percorre todo o vetor procurando o número X
        if (numeros[i] == x) { //sse o número na posicao i for igual a X
            encontrou = true; //marca que encontrou o número
            posicao = i; //guarda a posição onde encontrou
            break; //para de procurar
        }
    }
    
    if (encontrou) { //se encontrou o numero X
        cout << "O numero " << x << " ESTA no vetor!" << endl; //montra que o número está no vetor
        cout << "Primeira aparicao na posicao: " << (posicao+1) << endl; //mostra a posicao
    }
    else {
        cout << "O numero " << x << " NAO esta no vetor." << endl; //informa que o numero não esta no vetor
    }
    
    return 0; //retorna 0 indicando que o programa se encerrou com sucesso
}