

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	cout << "выдается ключ" << endl;
	int n = rand() % 100;
	cout << n << endl;
	cout << "введите ключ" << endl;
	int x = 0;
	cin >> x;

}
