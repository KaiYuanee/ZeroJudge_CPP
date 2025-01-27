#include <iostream>

using namespace std;

int main(){
    int row, column;
    while (cin >> row >> column){
        int matrix[row + 1][column + 1];
        for (int i = 0; i < row; i++){
            for (int j = 0; j < column; j++){
                cin >> matrix[i][j];
            }
        }
        for (int i = 0; i < column; i++){
            for (int j = 0; j < row; j++){
                cout << matrix[j][i] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}
