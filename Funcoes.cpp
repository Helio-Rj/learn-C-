#include <iostream> // Biblioteca para entrada e saída padrão

using namespace std; // Permite usar nomes padrão sem o prefixo 'std:'

void funcaoExemplo() {
    // Função sem retorno que exibe uma mensagem na tela
    cout << "Esta é uma função de exemplo." << endl; // Exibe mensagem
}

// Função que recebe dois inteiros, soma e retorna o resultado
int somar(int x, int y) {
    int soma; // Declara variável para soma
    soma = x + y; // Calcula a soma
    return x + y; // Retorna o resultado da soma
}

int main() {
    funcaoExemplo(); // Chama a função de exemplo

    int a = 10, b = 20; // Declara e inicializa duas variáveis inteiras
    int s = somar(a, b); // Chama a função somar com os valores de 'a' e 'b'
    cout << "A soma de " << a << " e " << b << " é: " << s << endl; // Exibe o resultado da soma   

    return 0; // Indica que o programa terminou com sucesso
}
