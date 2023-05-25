#include <iostream>
#include <vector>

using namespace std;

int main() {
    // leitura das dimens�es das matrizes
    int n1, m1, n2, m2;
    cout <<"Dimensao primeira matriz: ";
    cin >> n1 >> m1;
    cout <<"Dimensao segunda matriz: ";
	cin >> n2 >> m2;

    // cria��o e leitura da primeira matriz
    vector<vector<int> > matriz1(n1, vector<int>(m1));
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            cin >> matriz1[i][j];
        }
    }

    // cria��o e leitura da segunda matriz
    vector<vector<int> > matriz2(n2, vector<int>(m2));
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            cin >> matriz2[i][j];
        }
    }

    // verifica se as matrizes podem ser multiplicadas
    if (m1 != n2) {
        cout << "Erro: as dimens�es das matrizes s�o incompat�veis" << endl;
        return 0;
    }

    // cria��o da matriz resultante
    vector<vector<int> > matriz_resultado(n1, vector<int>(m2));

    // c�lculo da multiplica��o das matrizes
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            int soma = 0;
            for (int k = 0; k < m1; k++) {
                soma += matriz1[i][k] * matriz2[k][j];
            }
            matriz_resultado[i][j] = soma;
        }
    }
	cout <<"Resultado da multiplicacao da matriz 1 pela matriz 2: ";
    // impress�o da matriz resultante
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            cout << matriz_resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

