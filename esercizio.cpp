#include <iostream>
#include <string>

using namespace std;



int* aggiungiInFondo(int base[], int nuovo, int lunghezza){
int newLung = lunghezza + nuovo;
int nuovoArray[newLung];
int i = 0;
    for(int i;i < newLung-1; i ++){
            base[i] = nuovoArray[i];
            cout << nuovoArray;   //prova stampa

    }
        i++;
         nuovoArray[i] = nuovo;
         return nuovoArray;
}

int* aggiungiInTesta (int base[], int nuovo, int lunghezza){
int newLung = lunghezza + nuovo;
int newArray[newLung];
       
     newArray[0] = nuovo;
     for (int i = 1; i < newLung; i++){
              newArray[i] = base[i];
         
     }
      

      
     
}



int main(){


int* aggiungiInFondo(int base[], int nuovo, int lunghezza){

int* aggiungiInTesta()


    
}    //cambia parametri



}


