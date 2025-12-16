#include <iostream> // Biblioteca para entrada e saída padrão
#include <math.h>    // Biblioteca para funções matemáticas, como pow()

using namespace std; // Permite usar nomes padrão sem o prefixo 'std::'

int main() {
    int a = 5, b = 2; // Declaração e inicialização de duas variáveis inteiras

    int soma = a + b; // Soma dos valores de 'a' e 'b'
    cout << "a Soma é: " << soma << endl; // Exibe o resultado da soma

    cout << "a Soma é: " << a+b << endl; // Exibe a soma diretamente sem variável

    int sub = a - b; // Subtração de 'b' de 'a'
    cout << "a Subtração é: " << sub << endl; // Exibe o resultado da subtração

    cout << "a Subtração é: " << a-b << endl; // Exibe a subtração diretamente

    int multiplicacao = a * b; // Multiplicação de 'a' por 'b'
    cout << "a Multiplicação é: " << multiplicacao << endl; // Exibe o resultado da multiplicação

    cout << "a Multiplicação é: " << a*b << endl; // Exibe a multiplicação diretamente

    int quocientediv = a / b; // Divisão inteira de 'a' por 'b' (quociente)
    cout << "o Quociente da Divisão é: " << quocientediv << endl; // Exibe o quociente

    int restodiv = a % b; // Resto da divisão de 'a' por 'b'
    cout << "o Resto da Divisão é: " << restodiv << endl; // Exibe o resto

    float divreal = (float)a / b; // Divisão real (com casas decimais)
    cout << "a Divisão Real é: " << divreal << endl; // Exibe o resultado da divisão real

    float potencia = pow(a, b); // Calcula a potência de 'a' elevado a 'b'
    cout << "a Potência é: " << potencia << endl; // Exibe o resultado da potência

    cout << "valor de 'a' normal: " << a << endl; // Exibe o valor atual de 'a'

    a += 1; // Incrementa 'a' em 1 (a = a + 1)
    cout << "valor de 'a' com incremento: " << a << endl; // Exibe o valor de 'a' após incremento

    a -= 1; // Decrementa 'a' em 1 (a = a - 1)
    cout << "valor de 'a' com decremento: " << a << endl; // Exibe o valor de 'a' após decremento

    return 0; // Indica que o programa terminou com sucesso
}
// Fim do código
// Este programa demonstra o uso de operadores aritméticos em C++.