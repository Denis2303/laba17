#include <iostream>
#include <Windows.h>
using namespace std;
int main(){
	int n;
	setlocale(LC_ALL,"rus");
	cout << "Введите длину массива\n";
	cin >> n;
	int a[n];
	cout << "Введите элементы массива\n";
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = n - 2; i > 0; i++){
		if (a[i] > a[i - 1] && a[i] > a[i + 1]){
			cout << "Номер последнего локального максимума равен "<<i;
			break;
		}
	}
}
