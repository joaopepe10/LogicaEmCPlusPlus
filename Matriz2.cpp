#include <iostream>
#include <vector>

using namespace std;

int main() {

    // leitura das dimens�es das matrizes
    int l1, l2, c2;
    cin >> l1 >> l2 >> c2;

    // declara��o e leitura da primeira matriz
    vector<vector<int> > mat1(l1, vector<int>(l2));
    for(int i = 0; i < l1; i++) {
        for(int j = 0; j < l2; j++) {
            cin >> mat1[i][j];
        }
    }

    // declara��o e leitura da segunda matriz
    vector<vector<int> > mat2(l2, vector<int>(c2));
    for(int i = 0; i < l2; i++) {
        for(int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }

    // declara��o da matriz resultado
    vector<vector<int> > result(l1, vector<int>(c2, 0));

    // multiplica��o das matrizes
    for(int i = 0; i < l1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < l2; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // impress�o do resultado
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

