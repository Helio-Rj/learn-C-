#include <iostream>
// Inclui a biblioteca padrão para entrada e saída de dados

int main(int argc, char** argv[]) {
    // Função principal do programa. argc é o número de argumentos, argv é o vetor de argumentos.

    int myInt = 42; // Variável do tipo inteiro
    float myFloat = 3.14f; // Variável do tipo float (ponto flutuante de precisão simples)
    double myDouble = 2.71828; // Variável do tipo double (ponto flutuante de precisão dupla)
    char myChar = 'A'; // Variável do tipo caractere
    char myArray[14] = "Hello, World!"; // Array de caracteres (string)
    size_t mySizeT = 100; // Variável do tipo size_t (usada para tamanhos e índices)
    bool myBool = true;  // Variável booleana (verdadeiro ou falso)
    
    
    std::cout << "Integer: " << myInt << std::endl; // Exibe o valor da variável inteira
    std::cout << "Float: " << myFloat << std::endl; // Exibe o valor da variável float
    std::cout << "Double: " << myDouble << std::endl; // Exibe o valor da variável double
    std::cout << "Character: " << myChar << std::endl; // Exibe o valor do caractere
    std::cout << "Character Array: " << myArray << std::endl; // Exibe o conteúdo do array de caracteres
    std::cout << "Size_t: " << mySizeT << std::endl; // Exibe o valor da variável size_t
    std::cout << "Boolean: " << myBool << std::endl; // Exibe o valor da variável booleana
    
    
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
    // Declaração e inicialização de várias variáveis de diferentes tipos de dados