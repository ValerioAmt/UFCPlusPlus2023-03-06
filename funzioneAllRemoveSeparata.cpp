#include <iostream>
#include <string>

using namespace std;

int *rimuoviTutto(int base[], int dim, int numToDelete)
{
    int conta = 0;
    for (int i = 0; i < dim; i++)
        if (base[i] == numToDelete)
        {
            conta++;
        }
     int j =0;
    int newLung = dim - conta;
    int *newArray = new int[newLung];
    for (int i = 0; i < newLung; i++)
    {
        if (base[i] != numToDelete)
        {
            newArray[j] += base[i];
            j++;
        }
        else
        {
            newArray[j] += base[i ++];
        }
    }
    return newArray;
}

int main()
{   int quante = 0;

    int base[] = {2, 2, 3, 4, 5};
    int dim = 5;
    int numElimanare = 4;
    for (int i = 0; i < dim; i++){
        if (base[i] == numElimanare){
            quante++;
            //cout << quante <<endl;
        }
    }
    for(int i=0; i < dim - quante ;i++){
    cout << *rimuoviTutto(base, dim, numElimanare) <<endl;
    }
}