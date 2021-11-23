#include <iostream>

using namespace std;

void drawSquare(int width, int heigth){

    cout << width << " x " << heigth << endl;

    // print top border
    for ( int i =0; i < width; i++){
        cout << "#";
    }
    cout << endl;

    // print row by row;
    for ( int j = 0; j < heigth-2; j++) {
        // print first column;
        cout << "#";
        //print spaces;
        for( int a = 0; a < width-2; a++) {
            cout << " ";
        }
        //print last column;
        cout << "#" << endl;
    }

    //print bottom border;
    for ( int i =0; i < width; i++){
        cout << "#";
}
    cout << endl;
}
int main() {
    drawSquare(10, 15);
    drawSquare(6,18);
}
