
#include <iostream>
using namespace std;
int suma(int a, int b) {
    return a + b;
}
int diferenta(int a, int b) {
    return a - b;
}
int produs(int a, int b) {
    return a * b;
}
int impartire(int a, int b) {
    return a / b;
}
int main()
{/* afisare a 5 numere
    int n = 5;
    for (int i = 0; i <= n; i++) {
        cout << i << endl;

    }
    
    int a = 0;
    cout << "Valoare i++: " << a++ << endl;
    cout << "Dupa i++: " << a << endl;

    int b = 0;
    cout << "Valoare ++i: " << ++b << endl;
    cout << "Dupa ++i: " << b << endl;
    */
    
    cout << suma(2, 3);
    cout << diferenta(4, 5);
    cout << produs(2, 3);
    cout << impartire(6, 3);


}
