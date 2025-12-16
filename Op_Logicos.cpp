#include <iostream> // Biblioteca padrão para entrada e saída

using namespace std; // Evita precisar digitar std:: o tempo todo

int main() {
    // Aqui começa o caos: vamos pedir a frequência do aluno
    float frequencia; // Variável para guardar a frequência em porcentagem
    cout << "Digite a frequência do aluno (em %): "; // Mensagem para o usuário
    cin >> frequencia; // Lê a frequência digitada

    // Agora, vamos pegar as notas do aluno
    float nota1, nota2; // Variáveis para as duas notas
    cout << "Digite a primeira nota: "; // Pede a primeira nota
    cin >> nota1; // Lê a primeira nota

    cout << "Digite a segunda nota: "; // Pede a segunda nota
    cin >> nota2; // Lê a segunda nota
    
    // Calcula a média das notas, porque ninguém merece fazer isso de cabeça
    float media = (nota1 + nota2) / 2; // Média aritmética

    // Agora começa a verdadeira novela: descobrir o conceito da nota
    if (media < 2.5) {
        cout << "Sua nota é 'E'!" << endl; // Nota baixíssima, quase um meme
    } 
    else if (media < 5.0) {
        cout << "Sua nota é 'D'!" << endl; // Nota ruim, mas já viu piores
    } 
    else if (media < 7.5) {
        cout << "Sua nota é 'C'!" << endl; // Nota média, aquele famoso "passou raspando"
    } 
    else if (media < 9.0) {
        cout << "Sua nota é 'B'!" << endl; // Nota boa, parabéns!
    } 
    else {
        cout << "Sua nota é 'A'!" << endl; // Nota de gênio, pode pedir pizza
    }    
    
    cout << "A média é: " << media << endl; // Mostra a média calculada

    // Agora, a lógica cabeluda dos operadores lógicos
    if (media >= 7.0 && frequencia >= 75.0) {
        cout << "Aluno aprovado por média e frequência!" << endl; // Passou bonito
    } 
    else if (nota1 < 6 || nota2 > 6) {
        cout << "Aluno em recuperação!" << endl; // Tem chance, mas vai suar
    } 
    else {
        cout << "Aluno reprovado por média ou frequência!" << endl; // Não deu, só ano que vem
    }

    return 0; // Fim do programa, pode fechar o terminal
}
