#include <iostream> // Biblioteca para entrada e saída padrão

using namespace std; // Permite usar nomes padrão sem o prefixo 'std:'

int main() {
    float nota1, nota2; // Declara duas variáveis para armazenar as notas
    cout << "Digite a primeira nota: "; // Solicita a primeira nota ao usuário
    cin >> nota1; // Lê a primeira nota digitada

    cout << "Digite a segunda nota: "; // Solicita a segunda nota ao usuário
    cin >> nota2; // Lê a segunda nota digitada
    
    float media = (nota1 + nota2) / 2; // Calcula a média das duas notas
    // Estrutura condicional para determinar o conceito da nota
    if (media < 2.5) {
        cout << "Sua nota é 'E'!" << endl; // Média menor que 2.5
    } 
    else if (media < 5.0) {
        cout << "Sua nota é 'D'!" << endl; // Média entre 2.5 e 5.0
    } 
    else if (media < 7.5) {
        cout << "Sua nota é 'C'!" << endl; // Média entre 5.0 e 7.5
    } 
    else if (media < 9.0) {
        cout << "Sua nota é 'B'!" << endl; // Média entre 7.5 e 9.0
    } 
    else {
        cout << "Sua nota é 'A'!" << endl; // Média igual ou maior que 9.0
    }   
    
    cout << "A média é: " << media << endl; // Exibe a média calculada

    return 0; // Indica que o programa terminou com sucesso
}
