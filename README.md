# disciplina.de.poo

ATIVIDADE DE PROGRAMAÇÃO ORIENTADA A OBJETOS

1. O que é um vetor em C++? Explique com suas palavras.

Um vetor em C++ é uma estrutura que armazena varios dados do mesmo tipo em sequencia na memória, como uma lista enumerada. Cada elemento é acessado pela sua posição, que chamamos de índice, começando pelo 0.

2. Qual a diferença entre declarar um vetor com valor fixo e iniciáliza-lo com valores específicos?

A diferença é que quando só declaramos int numero[5]; por exemplo, só e criado os espacos vazios, mas eles ficam com valores aleatórios dentro. Quando se inicializa, int numero[5] = {10, 20, 30, 40, 50}; por exemplo, voce já cria e coloca os valores que quer.

3. Explique o que significa índice e qual o intervalo válido para um valor int notas[10];

O índice é o número da posição dentro do vetor onde queremos guardar ou pegar alguma valor, funcionando como um endereço que diz "quero acessar o elemento dessa tal posiçao". No caso de int notas[10], o índice válido vai de 0 a 9, totalizando 10 posições, porque na programação a contagem sempre começa do 0 e não do 1. Então a primeira nota etsá em notas[0] e a ultima nota, que é a décima, está em notas[9].

4. Crie um programa que:
   Possua um vetor de 5 números inteiros
   Peça ao usuário para digitar os valores
   Exiba todos os valores digitados

5. Usando o vetor do exercício anterior, calcule e exiba:
    A soma total dos números
    A média aritmética dos valores

6. Leia 8 números inteiros para dentro de um vetor e determine:
    O maior valor e em qual posição ele está
    O menor valor e em qual posição ele está

7. Crie um vetor com 10 números digitados pelo usuário.
    Depois peça um número X e informe:
    Se X está no vetor
    Em qual posição ele aparece pela primeira vez

8. Crie um vetor de 6 nomes (strings).
    O programa deve:
    Ler os nomes
    Perguntar um nome a ser buscado
    Informar se ele existe no vetor
