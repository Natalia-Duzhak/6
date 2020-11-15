#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int n, const int Low, const int High)
{
	for (int i = 0; i <= 21; i++)
		a[i] = Low + rand() % (High - Low + 1);
	
}

void Print(int* a, const int n)
{
	for (int i = 0; i <= 21; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Sum(int* a, const int n)
{
	int S = 0;
	for (int i = 0; i <= 21;i++)

		if (a[i] > 0 || a[i] % 3 != 0)
			S += a[i];
	return S;
}
int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	 int n = 22;
	int*a=new int[22];
	int Low = -10;
	int High = 35;
	Create(a, n, Low,High);
	Print(a,n );
	cout << "S =   " << Sum(a,n) << endl;
	cout << "number of elements:" << (n) << endl;
	delete[]a;

	return 0;
}
