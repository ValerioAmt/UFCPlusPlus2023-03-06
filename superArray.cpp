#include <iostream>
using namespace std;

// Create
int *aggiungiInFondo(int base[], int lunghezza, int nuovo)
{
    int nuovaLung = lunghezza + 1;
    int nuovoArray[nuovaLung];                             
    int i = 0;
    for (int i; i < nuovaLung - 1; i++)                        //riempo il nuovo array(composto da base + nuovo), inizio dall'inizio dell'array
    {                                                    //per arrivare fino alla penultima posizione, 
          nuovoArray[i] = base[i];
        // cout << nuovoArray;   //prova stampa            
    }
    i++;                                                      //essendo la i rimasta alla penultima posizione(ultima posizione escluso int NUOVO)
    nuovoArray[i] = nuovo;     
    for (i = 0; i < nuovaLung; i++){
        cout << nuovoArray[i] <<endl;
    }          //riempo l'ultima posizione con nuovo, dopo aver aumentato I cosicchè passi da penutlima a ultima posizione
    return nuovoArray;
}

// todo


int *aggiungiInTesta(int base[], int lunghezza, int nuovo)
{
    int newLung = lunghezza + 1;
    int newArray[newLung];

    newArray[0] = nuovo;                  //occupo subito la testa del nuovo array con l'intero passato come paramentro NUOVO
                                          // occupata la posizione [0] (ovvero la prima), riempo dalla posizione [1] in poi con il for 
    for (int i = 1; i < newLung; i++)          
    {
        newArray[i] = base[i];
    }
     cout<< newArray;
    return newArray;
}

int *aggiungiInPosizione(int base[], int dim, int nuovo, int posizione)
{
    int newLung = dim + 1;
    int newArray[newLung];
    for(int i = 0;i < newLung; i++){   //scorro lungo "l'array nuovo " e se l'indice I combacia con l'intero POSIZIONE
              newArray[i] = base[i];                          //inserirò l'intero NUOVO nella Iesima posizione dell'array nuovo.
              if(i == posizione){
                newArray[i] = nuovo;
              }

    }
     cout << newArray;
    return newArray;
}

// Read
int trovaPosizione(int base[], int dim, int cerca)
{   
 // int newArray[dim];
 int posizione = 0;
    for(int i = 0; i < dim; i++){
         if(base[i] == cerca){
            return i;
         }
    }
    return -1;
}
       
// Update
int *aggiornaInPosizione(int base[], int dim, int valore, int posizione)
{   
   int i = 0; 
   int newArray[dim];
   for(int i = 0; i < dim; i++);
          if (i == posizione - 1){
               newArray[i]=valore;
   }
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

    int *nuovoArray1 = aggiungiInFondo(p, dim, nuovo);
    /*
    dim++;
    for (int i = 0; i < dim; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

*/
    int *nuovoArray2 = aggiungiInTesta(base, dim, nuovo);
    /*
    dim++;
    for (int i = 0; i < dim; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
*/

    
    int *nuovoArray3 = aggiungiInPosizione(base, dim, nuovo);
    /*
     dim++;
    for (int i = 0; i < dim; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    cout << trovaPosizione(base, dim, cerca) << endl;
*/

    int *nuovoArray4= aggiornaInPosizione(base, dim, valore, posizione);
/*
    for (int i = 0; i < dim; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
*/
    return 0;
}