#include <iostream>
#include <string>

using namespace std;

int main(){
int base[5] = {24, 46, 8, 4, 6};
int lunghezza = 5;
int nuovo = 5;

int newLung = lunghezza + nuovo;
int nuovoArray[newLung];
int i = 0;
    for(int i;i < newLung-1; i ++){
            base[i] = nuovoArray[i];
            cout << nuovoArray;   //prova stampa

    }
        i++;
         nuovoArray[i] = nuovo;
         cout << nuovoArray;
}