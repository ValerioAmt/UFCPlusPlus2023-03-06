#include <iostream>
using namespace std;
 
// Create
int *aggiungiInFondo(int base[], int lunghezza, int nuovo)
{
    int newLung = lunghezza + nuovo;
int nuovoArray[newLung];
int i = 0;
    for(int i;i < newLung-1; i ++){
            base[i] = nuovoArray[i];
            //cout << nuovoArray;   //prova stampa

    }
        i++;
         nuovoArray[i] = nuovo;
         return nuovoArray;
}

    // todo
    

int *aggiungiInTesta(int base[], int lunghezza, int nuovo)
{
int newLung = lunghezza + nuovo;
int newArray[newLung];
       
     newArray[0] = nuovo;
     for (int i = 1; i < newLung; i++){
              newArray[i] = base[i];
         
     }
      
return newArray;
      
     
}
    

int *aggiungiInPosizione(int base[], int dim, int nuovo)
{
    // todo
    return base;
}
 
// Read
int trovaPosizione(int base[], int dim, int cerca)
{
    // todo
    return -1;
}
 
// Update
int *aggiornaInPosizione(int base[], int dim, int valore, int posizione)
{
    // todo
    return base;
}
 
int main()
{
 
    int base[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int dim = 10;
    int nuovo = 11;
    int cerca = 5;
    int valore = 12;
    int posizione = 5;
 
    int *p = aggiungiInFondo(base, dim, nuovo);
    dim++;
    for (int i = 0; i < dim; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
 
    p = aggiungiInTesta(base, dim, nuovo);
    // dim++;
    for (int i = 0; i < dim; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
 
    p = aggiungiInPosizione(base, dim, nuovo);
    // dim++;
    for (int i = 0; i < dim; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
 
    cout << trovaPosizione(base, dim, cerca) << endl;
 
    p = aggiornaInPosizione(base, dim, valore, posizione);
    for (int i = 0; i < dim; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
 
    return 0;
}