

#include <iostream>
using namespace std;
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

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
	*/
	int x = 5, y = 10;

	cout << "Inainte de swap: x = " << x << ", y = " << y << endl;
	swap(&x, &y);
	cout << "Dupa swap: x = " << x << ", y = " << y << endl;


}


