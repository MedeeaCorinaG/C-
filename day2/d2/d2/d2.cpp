

#include <iostream>
using namespace std;
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

}
void afiseaza_vector(int* v, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Valoare: " << *(v + i) << " | Adresa: " << (v + i) << endl;
	}
}
int suma_vector(int* v, int n) {
	int S = 0;
	for (int i = 0; i < n; i++) {
		S += *(v + i);
		
	}
	return S;
}
int main()
{
	/*int a = 10;
	int* p = &a;
	cout << "val lui a:" << a<<endl;
	cout << "adresa lui a:" << &a << endl;
	cout << "val lui p:" << p << endl;
	cout << "val lui p:" << *p << endl;
	

	int a = 5;
	int* p = &a;
	*p = 20;
	cout << "Valoarea lui a: " << a << endl;
	cout << "Valoarea prin pointer: " << *p << endl;
	
	int x = 5, y = 10;

	cout << "Inainte de swap: x = " << x << ", y = " << y << endl;
	swap(&x, &y);
	cout << "Dupa swap: x = " << x << ", y = " << y << endl;
	
	int v[5] = { 2,6,9,4,1 };
	for (int i = 0; i < 5; i++) {
		cout << v[i] << " - " << &v[i] << endl;
	}*/
	int v[5] = { 5,2,9,5,4 };
	int total = suma_vector(v, 5);
	cout << "Suma elementelor: " << total << endl;

}


