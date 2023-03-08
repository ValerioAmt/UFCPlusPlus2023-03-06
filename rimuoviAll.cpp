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
    int newLung = dim - conta;
    int *newArray = new int[newLung];
    for (int i = 0; i < newLung; i++)
    {
        if (base[i] != numToDelete)
        {
            newArray[i] = base[i];
        }
        else
        {
            newArray[i] = base[i + 1];
        }
    }
    return newArray;
}

int main()
{
    int base[5] = {1, 4, 3, 4, 5};
    int dim = 5;
    int numElimanare = 4;
    cout << *rimuoviTutto(base, dim, numElimanare);
}