#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    vector<string> nomes;
    vector<float> notas1;
    vector<float> notas2;

    cout << "Digite o limite de alunos (N): ";
    cin >> N;

    cin.ignore(); // Limpar o buffer de entrada

    for (int i = 0; i < N; i++) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        string nome;
        getline(cin, nome);
        nomes.push_back(nome);

        cout << "Digite a primeira nota do aluno " << nome << ": ";
        float nota1;
        cin >> nota1;
        notas1.push_back(nota1);

        cout << "Digite a segunda nota do aluno " << nome << ": ";
        float nota2;
        cin >> nota2;
        notas2.push_back(nota2);

        cin.ignore(); // Limpar o buffer de entrada
    }

    // Bubble Sort para ordenar os nomes em ordem alfabética
    int n = nomes.size();
    bool trocou;
    do {
        trocou = false;
        for (int j = 0; j < n - 1; j++) {
            if (nomes[j] > nomes[j + 1]) {
                swap(nomes[j], nomes[j + 1]);
                swap(notas1[j], notas1[j + 1]);
                swap(notas2[j], notas2[j + 1]);
                trocou = true;
            }
        }
        n--;
    } while (trocou);

    cout << "\nAlunos e suas notas (ordenados por nome):" << endl;
    for (int i = 0; i < nomes.size(); i++) {
        cout << "Aluno: " << nomes[i] << endl;
        cout << "Nota 1: " << notas1[i] << endl;
        cout << "Nota 2: " << notas2[i] << endl;
        cout << endl;
    }

    return 0;
}
