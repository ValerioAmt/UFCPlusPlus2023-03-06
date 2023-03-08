#include <iostream>
 
using namespace std;
 
int main(){
 
    int a=10;
    int b=20;
 
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
 
    int* p = &a;
    int* q = &b;
 
    cout << "p: " << p << endl;
    cout << "q: " << q << endl;
 
    cout << "*p: " << *p << endl;
    cout << "*q: " << *q << endl;
 
    int* r = p;
    p = q;
    q = r;
 
    cout << "stampa mia: " << *r << endl;
 
    cout << "p: " << *p << endl;
    cout << "q: " << *q << endl;
}