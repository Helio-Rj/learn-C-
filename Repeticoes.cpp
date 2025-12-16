#include <iostream> // Biblioteca para entrada e saída padrão

using namespace std; // Permite usar nomes padrão sem o prefixo 'std:'

int main(int argc, char const *argv[])
{
    int n; // Variável para armazenar o número digitado pelo usuário
    cout << "Digite um número inteiro positivo: "; // Solicita o número ao usuário
    cin >> n; // Lê o valor digitado

    int soma = 0; // Variável para acumular a soma
    int contador = 1; // Variável de controle para o laço while
    // Estrutura de repetição while: soma de 1 até n
    while (contador <= n)
    {
        soma += contador; // Adiciona o valor do contador à soma
        contador++; // Incrementa o contador
    }
    cout << "A soma dos números de 1 a " << n << " é: " << soma << endl; // Exibe o resultado da soma


    // Estrutura de repetição do...while: executa pelo menos uma vez
    do{
        soma += contador; // Adiciona o valor do contador à soma
        contador++; // Incrementa o contador
    } while (contador <= n);
    cout << "A soma dos números de 1 a " << n << " é: " << soma << endl; // Exibe o resultado da soma


    // Estrutura de repetição for: soma de 1 até n novamente
    for (int i = 1; i <= n; i++)
    {
        soma += i; // Adiciona o valor de i à soma
    }
    cout << "A soma dos números de 1 a " << n << " é: " << soma << endl; // Exibe o resultado da soma

    return 0; // Indica que o programa terminou com sucesso
}
