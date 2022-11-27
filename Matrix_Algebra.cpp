#include <iostream>
using namespace std;

struct Matrix{
    int r,c;
    int **space;
    Matrix(int r, int c)
    {
        space = new int*[r]; // arr = new int[5]
        for(int i = 0; i < r; i++)
        {
            space[i] = new int[c];
        }
    }
    int print(Matrix A);
    int*get_order(Matrix A);
    Matrix operator+(Matrix A);
    Matrix operator-(Matrix A);
    Matrix operator*(Matrix A);
    int Determinant(Matrix A);
};

void print(Matrix A){
    for(int i = 0; i < A.r; i++){
        for(int j = 0; j < A.c; j++){
            cout<<A.space[i][j]<<" ";
        }
        cout<<endl;
    }
}

int*get_order(Matrix A){
    int order[2] = {A.r,A.c};
    return order;
}


int main(){
    Matrix X(2, 2);
    cout<<get_order(X);
    print(X);
}