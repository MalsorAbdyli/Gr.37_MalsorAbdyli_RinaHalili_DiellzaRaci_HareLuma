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
        
    }
}

int main(){


    return 0;
}