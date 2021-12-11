#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
	int n, k, l;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите длину массива";
	cin >> n;
	int a[n];
	cout << "¬ведите элементы массива\n";
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << "¬ведите числа K и L\n";
	cin >> k >> l;
	double sum = 0;
	for (int i = k - 1; i <= l - 1; i++){
		sum += a[i];
	}
	sum = sum/(l - k + 1);
	cout << "—реднееарифметическое от K до L = " << sum;
}
