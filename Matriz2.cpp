#include <iostream>
#include <vector>

using namespace std;

int main() {

    // leitura das dimensões das matrizes
    int l1, l2, c2;
    cin >> l1 >> l2 >> c2;

    // declaração e leitura da primeira matriz
    vector<vector<int> > mat1(l1, vector<int>(l2));
    for(int i = 0; i < l1; i++) {
        for(int j = 0; j < l2; j++) {
            cin >> mat1[i][j];
        }
    }

    // declaração e leitura da segunda matriz
    vector<vector<int> > mat2(l2, vector<int>(c2));
    for(int i = 0; i < l2; i++) {
        for(int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }

    // declaração da matriz resultado
    vector<vector<int> > result(l1, vector<int>(c2, 0));

    // multiplicação das matrizes
    for(int i = 0; i < l1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < l2; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // impressão do resultado
    for(int i = 0; i < l1; i++) {
        for(int j = 0; j < c2; j++) {
            cout << result[i][j];
            if(j < c2-1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

