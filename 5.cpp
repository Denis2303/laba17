#include <iostream>
using namespace std;

int main(){
	int n;
	setlocale(LC_ALL, "rus");
	cout << "������� ����� �������\n";
	cin >> n;
	cout << "������� �������� �������\n";
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++){
		int t = 0;
		for (int j = i + 1; j < n; j++){
			if (a[i] == a[j]){
				cout << "������� ���������� ��������� ����� ";
				cout << i + 1 << ' ' << j + 1;
				break;
			}
		}
		if (t){
			break;
		}
	}
}
