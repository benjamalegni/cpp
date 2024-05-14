#include <iostream>

using namespace std;

const int ROW=3;
const int COL=3;

void transpose(int mat[][COL]){
    for(int i=0;i<COL;i++){
        for(int j=i+1;j<COL;j++){
            int aux=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=aux;
        }
    }
}

void insertmat(int mat[COL][COL]){
        for(int i=0;i<COL;i++){
            for(int j=0;j<COL;j++){
                cout << "inserte numero para la fila: "<<i<<" columna: "<<j;
                int num;
                cin >> num;
                mat[i][j]=num;
            }
        }
}

void displayMat(int mat[][ROW]){
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;

    }
}

int main(){
    int mat[ROW][COL];

    insertmat(mat);
    transpose(mat);
    displayMat(mat);
    return 0;
}
