#include <iostream>
#include <cmath>

using namespace std;


const int RRESHTAT = 5;
const int KOLONAT = 5;


char tabela[RRESHTAT][KOLONAT] = {
    {'a', 'b', 'c', 'd', 'e'},
    {'f', 'g', 'h', 'i', 'k'},
    {'l', 'm', 'n', 'o', 'p'},
    {'q', 'r', 's', 't', 'u'},
    {'v', 'w', 'x', 'y', 'z'}
};

void polybiusSquare() {

    cout << "  1 2 3 4 5" << endl;

    for (int i = 0; i < RRESHTAT; i++) {
        cout << i + 1 << " ";

        for (int j = 0; j < KOLONAT; j++) {
            cout << tabela[i][j] << " ";
        }
        cout << endl;
    }
}



void polybiusCipher(string s) {
    int rreshti, kolona;

    for (int i = 0; s[i]; i++) {

        if (isupper(s[i])) {

            rreshti = ceil((s[i] - 'A') / 5) + 1;
            kolona = ((s[i] - 'A') % 5) + 1;
        }

        else {

            rreshti = ceil((s[i] - 'a') / 5) + 1;
            kolona = ((s[i] - 'a') % 5) + 1;
        }

        if (tolower(s[i]) == 'k') {
            rreshti = rreshti - 1;
            kolona = 5 - kolona + 1;
        }

        else if (tolower(s[i]) >= 'j') {
            if (kolona == 1) {
                kolona = 6;
                rreshti = rreshti - 1;
            }
            kolona = kolona - 1;
        }
        cout << rreshti << kolona;
    }

    cout << endl;
}
        
    

int main(){

    polybiusSquare();
    cout << endl;

    return 0;
}