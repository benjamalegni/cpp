#include <iostream>

using namespace std;

const int ROW_1=3;
const int COL_2=3;
const int ROW_2=3;
const int COL_1=3;

void multiplicar_mat(int mat1[][COL_1],int mat2[][COL_2],int result[][COL_2]){
    if(COL_1!=COL_2){
        cout << "no se pueden multiplicar las matrices" << endl;
    }

    for(int i=0;i<ROW_1;i++){
        for(int j=0;j<COL_2;j++){
            result[i][j]=0;
            for(int k=0;k<COL_1;k++){
                result[i][j]+=mat1[i][j]*mat2[i][j];
            }
        }
    }
}

void displayMat(int mat[][ROW_1]){
    for(int i=0;i<ROW_1;i++){
        for(int j=0;j<COL_1;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;

    }
}

int main(){
    int mat1[ROW_1][COL_1] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    int mat2[ROW_2][COL_2] = {{9, 8, 7},
                               {6, 5, 4},
                               {3, 2, 1}};

    int result[COL_1][ROW_2];

    multiplicar_mat(mat1,mat2,result);
    displayMat(result);

    return 0;
}
