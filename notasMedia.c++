#include <iostream>
#include <iomanip> // Para usar std::setprecision

using namespace std;

int main() {
    const int NUM_ALUNOS = 10;
    double notas[NUM_ALUNOS][3]; // 0: Português, 1: Matemática, 2: Inglês
    double medias[NUM_ALUNOS];
    double maior_media = 0.0;
    double menor_media = 10.0; // Considerando que a nota máxima é 10
    int aluno_maior = 0, aluno_menor = 0;

    // Ler as notas dos alunos
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Digite as notas do aluno " << (i + 1) << ":\n";
        cout << "Português: ";
        cin >> notas[i][0];
        cout << "Matemática: ";
        cin >> notas[i][1];
        cout << "Inglês: ";
        cin >> notas[i][2];
        
        // Calcular a média
        medias[i] = (notas[i][0] + notas[i][1] + notas[i][2]) / 3.0;

        // Verificar maior e menor média
        if (medias[i] > maior_media) {
            maior_media = medias[i];
            aluno_maior = i;
        }
        if (medias[i] < menor_media) {
            menor_media = medias[i];
            aluno_menor = i;
        }
    }

    // Exibir resultados
    cout << fixed << setprecision(2); // Para formatar as médias com 2 casas decimais
    cout << "\nMédia das notas:\n";
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Aluno " << (i + 1) << ": " << medias[i] << endl;
    }
    cout << "\nMaior média: Aluno " << (aluno_maior + 1) << " com média " << maior_media << endl;
    cout << "Menor média: Aluno " << (aluno_menor + 1) << " com média " << menor_media << endl;

    return 0;
}
