#include <iostream>
using namespace std;
void main()
{
	int *c1 = new int(3);			// Виділення пам'яті для змінної і надання значення 3
	int *c2 = new int(5);			// Виділення пам'яті для змінної і надання значення 5
	cout << *c1 << " " << *c2 << "\n";
	c1 = c2;
	cout << *c1 << " " << *c2 << "\n";
	delete(c2);						// Вивільнення пам'яті, наданої для с2          
	cout << *c1 << "\n";
}

