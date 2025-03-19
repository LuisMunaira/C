#include <iostream>
#include <cstdlib> // Para exit()
#include <limits>  // Para numeric_limits

using namespace std;

void mostrarMenu() {
    cout << "Escolha uma operacao: " << endl;
    cout << "1. Soma" << endl;
    cout << "2. Subtracao" << endl;
    cout << "3. Multiplicacao" << endl;
    cout << "4. Divisao" << endl;
    cout << "5. Sair" << endl;
}

int main() {
    double num1, num2;
    int operacao;
    bool continuar = true;

    while (continuar) {
        mostrarMenu();
        cout << "Digite o numero da operacao: ";
        cin >> operacao;

        if (cin.fail()) {
            cin.clear(); // Limpa o erro
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora o restante da entrada
            cout << "Entrada invalida! Por favor, insira um numero valido." << endl;
            continue;
        }

        if (operacao == 5) {
            cout << "Saindo do programa..." << endl;
            continuar = false;
            continue;
        }

        cout << "Digite o primeiro numero: ";
        cin >> num1;
        cout << "Digite o segundo numero: ";
        cin >> num2;

        switch (operacao) {
            case 1:
                cout << "Resultado: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Resultado: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Resultado: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Resultado: " << num1 / num2 << endl;
                } else {
                    cout << "Erro: Divisao por zero!" << endl;
                }
                break;
            default:
                cout << "Operacao invalida!" << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}

