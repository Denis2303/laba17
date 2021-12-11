#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
	int n;
	setlocale(LC_ALL, "rus");
	cout << "Введите длину массива\n";
	cin >> n;
	cout << "Введите элементы массива\n";
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int d = a[1];
	for (int i = 1; i < n; i+=2){
		if (a[i] < d){
			d = a[i];
		}
	}
	cout << "Минимальный элемент с четным индексом равен " << d;
}
