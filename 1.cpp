#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
	int n, k, l;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������� ����� �������";
	cin >> n;
	int a[n];
	cout << "������� �������� �������\n";
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << "������� ����� K � L\n";
	cin >> k >> l;
	double sum = 0;
	for (int i = k - 1; i <= l - 1; i++){
		sum += a[i];
	}
	sum = sum/(l - k + 1);
	cout << "��������������������� �� K �� L = " << sum;
}
