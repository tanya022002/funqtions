#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void generateMatrix(int length) {
    srand(time(0));
    
    int matrix[length][length];
    cout << "Generating square: " << length << "*" << length << endl;
    for (int r=0; r < length; r++) {
        for (int c=0; c < length; c++) {
            matrix[r][c] = rand() % 10;
        }
    }
    
    for (int r=0; r < length; r++) {
        for (int c=0; c < length; c++) {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
    
    cout << "Printing left diagonal: " << endl;
    
    for(int i=0; i < length; i++){
        cout << matrix[i][i] << " ";
    }
    cout << endl;
}

int main() {
    generateMatrix(4);
    
    generateMatrix(5);

}
