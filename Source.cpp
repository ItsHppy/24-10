#include <iostream>
using namespace std;
int main() {
	//series6
	/*double dr;
	double proizv = 1;
	int i = 1;
	int N;
	cin >> N;
	while (i <= N) {
		cout << i << " ";
		cin >> dr;
		proizv *= dr;
		i++;
	}
	cout << proizv << endl;*/
	//3
	/*for (int i = 0; i < 20; i++) cout << '#';
	cout << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << '#';
		for (int j = 0; j < 18; j++) cout << ' ';
		cout << '#' << endl;
	}
	for (int i = 0; i < 20; i++) cout << '#';
	cout << endl;*/
	//18
	/*int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
			cout << i << " ";
		}
	}*/
	//22
	/*int n;
	cin >> n;
	double sum = 0;
	double i = 1.0;
	while (i <= n) {
		sum += 1.0 / i;
		i++;
	}
	cout << sum << endl;*/
	//While
	int n;
	cin >> n;
	int proizv = 1;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			proizv *= i;
		}
	}
	cout << proizv << endl;
}