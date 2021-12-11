#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
	int n;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите количество элементов массива\n";
	cin >> n;
	int a[n];
	cout << "¬ведите элементы массива\n";
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int d = a[1] - a[0];
	int t = 1;
	for (int i = 1; i < n; i++){
		if (a[i] - a[i - 1] != d){
			t = 0;
			break;
		}
	}
	if (t){
		cout << d;
	}
	else {
		cout << 0;
	}
}
