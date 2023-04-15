#include <iostream>
#include <cmath>

using namespace std;

//numri i rreshtave
const int RRESHTAT = 5;
//numri i kolonave
const int KOLONAT = 5;

//tabela POLYBIUS SQUARE
char tabela[RRESHTAT][KOLONAT] = {
    {'a', 'b', 'c', 'd', 'e'},
    {'f', 'g', 'h', 'i', 'k'},
    {'l', 'm', 'n', 'o', 'p'},
    {'q', 'r', 's', 't', 'u'},
    {'v', 'w', 'x', 'y', 'z'}
};

void polybiusSquare() {

    //headeri
    cout << "  1 2 3 4 5" << endl;

    //numri i rreshtave
    for (int i = 0; i < RRESHTAT; i++) {
        cout << i + 1 << " ";

         //shfaqja e karakterit perkatës për çdo kolonë të rreshtit
        for (int j = 0; j < KOLONAT; j++) {
            cout << tabela[i][j] << " ";
        }
        cout << endl;
    }
}
// funksioni për shfaqjen e tekstit si POLYBIUS SQUARE CIPHER
void polybiusCipher(string s) {
    int rreshti, kolona;

    // konvertimi i çdo karakteri në kod të enkriptuar
    for (int i = 0; s[i]; i++) {

        //nëse karakteri nuk është pjesë e alfabetit
        if (!isalpha(s[i])) {
            cout <<"\nKarakter i panjohur: " << s[i]<<"\n";
            continue;
        }
        
        // nëse karakteri është me shkronjë të madhe
        if (isupper(s[i])) {
            // gjetja e rreshtit të tabelës
            rreshti = ceil((s[i] - 'A') / 5) + 1;

            // gjetja e kolonës së tabelës
            kolona = ((s[i] - 'A') % 5) + 1;
        }

        // nëse karakteri është me shkronjë të vogël
        else {  
            // gjetja e rreshtit të tabelës
            rreshti = ceil((s[i] - 'a') / 5) + 1;

            // gjetja e kolonës së tabelës
            kolona = ((s[i] - 'a') % 5) + 1;
        }

        // nëse karakteri është 'k'
        if (tolower(s[i]) == 'k') {
            rreshti = rreshti - 1;
            kolona = 5 - kolona + 1;
        }

        // nëse karakteri është më i madh se 'j'
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
        
    
//Main Kodi
int main(){

    string s;

    polybiusSquare();
    cout << endl;

    cout << "Jepni plaintext-in: ";
    cin >> s;

    polybiusCipher(s);

    return 0;
}